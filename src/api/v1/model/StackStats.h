/**
* Inception Core API
* REST API interface to the Inception Core
*
* OpenAPI spec version: 1
* Contact: support@spirent.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
/*
 * StackStats.h
 *
 * Stack statistics
 */

#ifndef StackStats_H_
#define StackStats_H_


#include "ModelBase.h"

#include "StackProtocolStats.h"
#include "StackElementStats.h"
#include <vector>
#include "StackMemoryStats.h"

namespace icp {
namespace api {
namespace v1 {
namespace model {

/// <summary>
/// Stack statistics
/// </summary>
class  StackStats
    : public ModelBase
{
public:
    StackStats();
    virtual ~StackStats();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// StackStats members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getArp() const;
    void setArp(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIpv4() const;
    void setIpv4(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIpv4Frag() const;
    void setIpv4Frag(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIcmpv4() const;
    void setIcmpv4(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIgmp() const;
    void setIgmp(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getNd() const;
    void setNd(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIpv6() const;
    void setIpv6(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIpv6Frag() const;
    void setIpv6Frag(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getIcmpv6() const;
    void setIcmpv6(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getMld() const;
    void setMld(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getUdp() const;
    void setUdp(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackProtocolStats> getTcp() const;
    void setTcp(std::shared_ptr<StackProtocolStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackMemoryStats> getHeap() const;
    void setHeap(std::shared_ptr<StackMemoryStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StackMemoryStats>>& getPools();
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackElementStats> getSems() const;
    void setSems(std::shared_ptr<StackElementStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackElementStats> getMutexes() const;
    void setMutexes(std::shared_ptr<StackElementStats> value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StackElementStats> getMboxes() const;
    void setMboxes(std::shared_ptr<StackElementStats> value);
    
protected:
    std::shared_ptr<StackProtocolStats> m_Arp;

    std::shared_ptr<StackProtocolStats> m_Ipv4;

    std::shared_ptr<StackProtocolStats> m_Ipv4_frag;

    std::shared_ptr<StackProtocolStats> m_Icmpv4;

    std::shared_ptr<StackProtocolStats> m_Igmp;

    std::shared_ptr<StackProtocolStats> m_Nd;

    std::shared_ptr<StackProtocolStats> m_Ipv6;

    std::shared_ptr<StackProtocolStats> m_Ipv6_frag;

    std::shared_ptr<StackProtocolStats> m_Icmpv6;

    std::shared_ptr<StackProtocolStats> m_Mld;

    std::shared_ptr<StackProtocolStats> m_Udp;

    std::shared_ptr<StackProtocolStats> m_Tcp;

    std::shared_ptr<StackMemoryStats> m_Heap;

    std::vector<std::shared_ptr<StackMemoryStats>> m_Pools;

    std::shared_ptr<StackElementStats> m_Sems;

    std::shared_ptr<StackElementStats> m_Mutexes;

    std::shared_ptr<StackElementStats> m_Mboxes;

};

}
}
}
}

#endif /* StackStats_H_ */