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


#include "BulkCreateInterfacesRequest.h"

namespace icp {
namespace api {
namespace v1 {
namespace model {

BulkCreateInterfacesRequest::BulkCreateInterfacesRequest()
{
    
}

BulkCreateInterfacesRequest::~BulkCreateInterfacesRequest()
{
}

void BulkCreateInterfacesRequest::validate()
{
    // TODO: implement validation
}

nlohmann::json BulkCreateInterfacesRequest::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    {
        nlohmann::json jsonArray;
        for( auto& item : m_Items )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["items"] = jsonArray;
            }
    

    return val;
}

void BulkCreateInterfacesRequest::fromJson(nlohmann::json& val)
{
    {
        m_Items.clear();
        nlohmann::json jsonArray;
                for( auto& item : val["items"] )
        {
            
            if(item.is_null())
            {
                m_Items.push_back( std::shared_ptr<Interface>(nullptr) );
            }
            else
            {
                std::shared_ptr<Interface> newItem(new Interface());
                newItem->fromJson(item);
                m_Items.push_back( newItem );
            }
            
        }
    }
    
}


std::vector<std::shared_ptr<Interface>>& BulkCreateInterfacesRequest::getItems()
{
    return m_Items;
}

}
}
}
}
