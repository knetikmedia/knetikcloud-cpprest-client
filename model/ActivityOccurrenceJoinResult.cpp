/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "ActivityOccurrenceJoinResult.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityOccurrenceJoinResult::ActivityOccurrenceJoinResult()
{
    m_EntitlementIsSet = false;
    m_Error_code = 0;
    m_Message = U("");
    m_MessageIsSet = false;
    m_User_id = 0L;
}

ActivityOccurrenceJoinResult::~ActivityOccurrenceJoinResult()
{
}

void ActivityOccurrenceJoinResult::validate()
{
    // TODO: implement validation
}

web::json::value ActivityOccurrenceJoinResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EntitlementIsSet)
    {
        val[U("entitlement")] = ModelBase::toJson(m_Entitlement);
    }
    val[U("error_code")] = ModelBase::toJson(m_Error_code);
    if(m_MessageIsSet)
    {
        val[U("message")] = ModelBase::toJson(m_Message);
    }
    val[U("user_id")] = ModelBase::toJson(m_User_id);

    return val;
}

void ActivityOccurrenceJoinResult::fromJson(web::json::value& val)
{
    if(val.has_field(U("entitlement")))
    {
        if(!val[U("entitlement")].is_null())
        {
            std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
            newItem->fromJson(val[U("entitlement")]);
            setEntitlement( newItem );
        }
    }
    setErrorCode(ModelBase::int32_tFromJson(val[U("error_code")]));
    if(val.has_field(U("message")))
    {
        setMessage(ModelBase::stringFromJson(val[U("message")]));
    }
    setUserId(ModelBase::int64_tFromJson(val[U("user_id")]));
}

void ActivityOccurrenceJoinResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_EntitlementIsSet)
    {
        if (m_Entitlement.get())
        {
            m_Entitlement->toMultipart(multipart, U("entitlement."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("error_code"), m_Error_code));
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("message"), m_Message));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
}

void ActivityOccurrenceJoinResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("entitlement")))
    {
        if(multipart->hasContent(U("entitlement")))
        {
            std::shared_ptr<ActivityEntitlementResource> newItem(new ActivityEntitlementResource());
            newItem->fromMultiPart(multipart, U("entitlement."));
            setEntitlement( newItem );
        }
    }
    setErrorCode(ModelBase::int32_tFromHttpContent(multipart->getContent(U("error_code"))));
    if(multipart->hasContent(U("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("message"))));
    }
    setUserId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("user_id"))));
}

std::shared_ptr<ActivityEntitlementResource> ActivityOccurrenceJoinResult::getEntitlement() const
{
    return m_Entitlement;
}


void ActivityOccurrenceJoinResult::setEntitlement(std::shared_ptr<ActivityEntitlementResource> value)
{
    m_Entitlement = value;
    m_EntitlementIsSet = true;
}
bool ActivityOccurrenceJoinResult::entitlementIsSet() const
{
    return m_EntitlementIsSet;
}

void ActivityOccurrenceJoinResult::unsetEntitlement()
{
    m_EntitlementIsSet = false;
}

int32_t ActivityOccurrenceJoinResult::getErrorCode() const
{
    return m_Error_code;
}


void ActivityOccurrenceJoinResult::setErrorCode(int32_t value)
{
    m_Error_code = value;
    
}
utility::string_t ActivityOccurrenceJoinResult::getMessage() const
{
    return m_Message;
}


void ActivityOccurrenceJoinResult::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool ActivityOccurrenceJoinResult::messageIsSet() const
{
    return m_MessageIsSet;
}

void ActivityOccurrenceJoinResult::unsetMessage()
{
    m_MessageIsSet = false;
}

int64_t ActivityOccurrenceJoinResult::getUserId() const
{
    return m_User_id;
}


void ActivityOccurrenceJoinResult::setUserId(int64_t value)
{
    m_User_id = value;
    
}
}
}
}
}

