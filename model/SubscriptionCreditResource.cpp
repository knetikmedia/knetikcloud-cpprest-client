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



#include "SubscriptionCreditResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SubscriptionCreditResource::SubscriptionCreditResource()
{
    m_Amount = 0.0;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Inventory_id = 0;
    m_Inventory_idIsSet = false;
    m_Reason = U("");
    
}

SubscriptionCreditResource::~SubscriptionCreditResource()
{
}

void SubscriptionCreditResource::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionCreditResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("amount")] = ModelBase::toJson(m_Amount);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Inventory_idIsSet)
    {
        val[U("inventory_id")] = ModelBase::toJson(m_Inventory_id);
    }
    val[U("reason")] = ModelBase::toJson(m_Reason);
    

    return val;
}

void SubscriptionCreditResource::fromJson(web::json::value& val)
{
    setAmount(ModelBase::doubleFromJson(val[U("amount")]));
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("inventory_id")))
    {
        setInventoryId(ModelBase::int32_tFromJson(val[U("inventory_id")]));
    }
    setReason(ModelBase::stringFromJson(val[U("reason")]));
    
}

void SubscriptionCreditResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("amount"), m_Amount));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Inventory_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inventory_id"), m_Inventory_id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("reason"), m_Reason));
    
}

void SubscriptionCreditResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setAmount(ModelBase::doubleFromHttpContent(multipart->getContent(U("amount"))));
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("inventory_id")))
    {
        setInventoryId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("inventory_id"))));
    }
    setReason(ModelBase::stringFromHttpContent(multipart->getContent(U("reason"))));
    
}


double SubscriptionCreditResource::getAmount() const
{
    return m_Amount;
}
void SubscriptionCreditResource::setAmount(double value)
{
    m_Amount = value;
    
}
int64_t SubscriptionCreditResource::getCreatedDate() const
{
    return m_Created_date;
}
void SubscriptionCreditResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool SubscriptionCreditResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void SubscriptionCreditResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int32_t SubscriptionCreditResource::getId() const
{
    return m_Id;
}
void SubscriptionCreditResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SubscriptionCreditResource::idIsSet() const
{
    return m_IdIsSet;
}
void SubscriptionCreditResource::unsetId()
{
    m_IdIsSet = false;
}
int32_t SubscriptionCreditResource::getInventoryId() const
{
    return m_Inventory_id;
}
void SubscriptionCreditResource::setInventoryId(int32_t value)
{
    m_Inventory_id = value;
    m_Inventory_idIsSet = true;
}
bool SubscriptionCreditResource::inventory_idIsSet() const
{
    return m_Inventory_idIsSet;
}
void SubscriptionCreditResource::unsetInventory_id()
{
    m_Inventory_idIsSet = false;
}
utility::string_t SubscriptionCreditResource::getReason() const
{
    return m_Reason;
}
void SubscriptionCreditResource::setReason(utility::string_t value)
{
    m_Reason = value;
    
}

}
}
}
}
