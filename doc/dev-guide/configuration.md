
# Configurations

## dynamic config.yaml

   * DPDK
       - modules.packetio.dpdk.test-portpairs
           + number of loopback port pairs for testing, defaults to 1

       - modules.packetio.dpdk.test-mode
           + enable test mode by creating loopback port pairs

       - modules.packetio.dpdk.options
           + Example: ["-m256m", "--no-huge"]
           
       - modules.packetio.dpdk.port-ids
           + Example: [port0: port0, port1: port1]

       - modules.packetio.dpdk.no-rx-interrupts
           + disable receive queue interrupts
       
   * Socket
       - modules.socket.force-unlink
           + Force removal of stale files

       - modules.socket.prefix
           + Prefix used when running multiple instances
       
   * API   
       - modules.api.port
           + Rest API HTTP port

When running AAT, the typical configuration is 

```YAML
modules:
  packetio:
    dpdk:
      options:
        - "-m256m"
        - "--no-huge"
      test-mode: true
      port-ids:
        port0: port0
        port1: port1

resources:
  /interfaces/dataplane-server:
    port_id: port0
    ..

  /interfaces/dataplane-client:
    port_id: port1
    ...

```

## resources initialization

During the initialization, the API module sends a _internal_ HTTP post to itself to create the _interfaces_ resources, which is then sent to the Packet IO module via 0MQ.

Let consider the following interface need to be created:

```YAML
  /interfaces/interface-one:
    port_id: port0
    config:
      protocols:
        - eth:
            mac_address: "00:10:94:ae:d6:aa"
        - ipv4:
            method: static
            static:
              address: "198.51.100.10"
              prefix_length: 24
              gateway: "198.51.100.1"
```

This configuration will be stored using the following type:

```C++
struct config_data {
    std::vector<protocol_config> protocols;
    std::string port_id;
    std::string id;
};

typedef std::variant<std::monostate, eth_protocol_config, ipv4_protocol_config> protocol_config;

...
```

The resource can also contain ports, eg:

```YAML
resources:
  /ports/port-bond:
    kind: bond
    config:
      bond:
        mode: lag_802_3_ad
        ports:
          - port0
          - port1
```

This will create a new port (`port-bond`), and the bounding is done using DPDK `rte_eth_bond_create` method. Note that only `802.3AD` lad mode is supported.