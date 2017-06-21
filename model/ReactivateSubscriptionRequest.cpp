/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "ReactivateSubscriptionRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ReactivateSubscriptionRequest::ReactivateSubscriptionRequest()
{
    m_Inventory_id = 0;
    m_Inventory_idIsSet = false;
    m_Reactivation_fee = false;
    m_Reactivation_feeIsSet = false;
    
}

ReactivateSubscriptionRequest::~ReactivateSubscriptionRequest()
{
}

void ReactivateSubscriptionRequest::validate()
{
    // TODO: implement validation
}

web::json::value ReactivateSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Inventory_idIsSet)
    {
        val[U("inventory_id")] = ModelBase::toJson(m_Inventory_id);
    }
    if(m_Reactivation_feeIsSet)
    {
        val[U("reactivation_fee")] = ModelBase::toJson(m_Reactivation_fee);
    }
    

    return val;
}

void ReactivateSubscriptionRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("inventory_id")))
    {
        setInventoryId(ModelBase::int32_tFromJson(val[U("inventory_id")]));
    }
    if(val.has_field(U("reactivation_fee")))
    {
        setReactivationFee(ModelBase::boolFromJson(val[U("reactivation_fee")]));
    }
    
}

void ReactivateSubscriptionRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Inventory_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inventory_id"), m_Inventory_id));
    }
    if(m_Reactivation_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("reactivation_fee"), m_Reactivation_fee));
    }
    
}

void ReactivateSubscriptionRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("inventory_id")))
    {
        setInventoryId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("inventory_id"))));
    }
    if(multipart->hasContent(U("reactivation_fee")))
    {
        setReactivationFee(ModelBase::boolFromHttpContent(multipart->getContent(U("reactivation_fee"))));
    }
    
}


int32_t ReactivateSubscriptionRequest::getInventoryId() const
{
    return m_Inventory_id;
}
void ReactivateSubscriptionRequest::setInventoryId(int32_t value)
{
    m_Inventory_id = value;
    m_Inventory_idIsSet = true;
}
bool ReactivateSubscriptionRequest::inventory_idIsSet() const
{
    return m_Inventory_idIsSet;
}
void ReactivateSubscriptionRequest::unsetInventory_id()
{
    m_Inventory_idIsSet = false;
}
bool ReactivateSubscriptionRequest::getReactivationFee() const
{
    return m_Reactivation_fee;
}
void ReactivateSubscriptionRequest::setReactivationFee(bool value)
{
    m_Reactivation_fee = value;
    m_Reactivation_feeIsSet = true;
}
bool ReactivateSubscriptionRequest::reactivation_feeIsSet() const
{
    return m_Reactivation_feeIsSet;
}
void ReactivateSubscriptionRequest::unsetReactivation_fee()
{
    m_Reactivation_feeIsSet = false;
}

}
}
}
}

