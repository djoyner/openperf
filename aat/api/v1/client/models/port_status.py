# coding: utf-8

"""
    Inception Core API

    REST API interface to the Inception Core  # noqa: E501

    OpenAPI spec version: 1
    Contact: support@spirent.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class PortStatus(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'link': 'str',
        'speed': 'int',
        'duplex': 'str'
    }

    attribute_map = {
        'link': 'link',
        'speed': 'speed',
        'duplex': 'duplex'
    }

    def __init__(self, link=None, speed=None, duplex=None):  # noqa: E501
        """PortStatus - a model defined in Swagger"""  # noqa: E501

        self._link = None
        self._speed = None
        self._duplex = None
        self.discriminator = None

        self.link = link
        self.speed = speed
        self.duplex = duplex

    @property
    def link(self):
        """Gets the link of this PortStatus.  # noqa: E501

        Link status  # noqa: E501

        :return: The link of this PortStatus.  # noqa: E501
        :rtype: str
        """
        return self._link

    @link.setter
    def link(self, link):
        """Sets the link of this PortStatus.

        Link status  # noqa: E501

        :param link: The link of this PortStatus.  # noqa: E501
        :type: str
        """
        if link is None:
            raise ValueError("Invalid value for `link`, must not be `None`")  # noqa: E501
        allowed_values = ["up", "down", "unknown"]  # noqa: E501
        if link not in allowed_values:
            raise ValueError(
                "Invalid value for `link` ({0}), must be one of {1}"  # noqa: E501
                .format(link, allowed_values)
            )

        self._link = link

    @property
    def speed(self):
        """Gets the speed of this PortStatus.  # noqa: E501

        Port speed (in Mbps)  # noqa: E501

        :return: The speed of this PortStatus.  # noqa: E501
        :rtype: int
        """
        return self._speed

    @speed.setter
    def speed(self, speed):
        """Sets the speed of this PortStatus.

        Port speed (in Mbps)  # noqa: E501

        :param speed: The speed of this PortStatus.  # noqa: E501
        :type: int
        """
        if speed is None:
            raise ValueError("Invalid value for `speed`, must not be `None`")  # noqa: E501

        self._speed = speed

    @property
    def duplex(self):
        """Gets the duplex of this PortStatus.  # noqa: E501

        Port duplex  # noqa: E501

        :return: The duplex of this PortStatus.  # noqa: E501
        :rtype: str
        """
        return self._duplex

    @duplex.setter
    def duplex(self, duplex):
        """Sets the duplex of this PortStatus.

        Port duplex  # noqa: E501

        :param duplex: The duplex of this PortStatus.  # noqa: E501
        :type: str
        """
        if duplex is None:
            raise ValueError("Invalid value for `duplex`, must not be `None`")  # noqa: E501
        allowed_values = ["full", "half", "unknown"]  # noqa: E501
        if duplex not in allowed_values:
            raise ValueError(
                "Invalid value for `duplex` ({0}), must be one of {1}"  # noqa: E501
                .format(duplex, allowed_values)
            )

        self._duplex = duplex

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, PortStatus):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other