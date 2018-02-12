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



#include "NotificationResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

NotificationResource::NotificationResource()
{
    m_DataIsSet = false;
    m_Notification_id = U("");
    m_Notification_idIsSet = false;
    m_Notification_type_id = U("");
    m_Recipient = U("");
    m_Recipient_type = U("");
    m_Send_date = 0L;
    m_Send_dateIsSet = false;
}

NotificationResource::~NotificationResource()
{
}

void NotificationResource::validate()
{
    // TODO: implement validation
}

web::json::value NotificationResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DataIsSet)
    {
        val[U("data")] = ModelBase::toJson(m_Data);
    }
    if(m_Notification_idIsSet)
    {
        val[U("notification_id")] = ModelBase::toJson(m_Notification_id);
    }
    val[U("notification_type_id")] = ModelBase::toJson(m_Notification_type_id);
    val[U("recipient")] = ModelBase::toJson(m_Recipient);
    val[U("recipient_type")] = ModelBase::toJson(m_Recipient_type);
    if(m_Send_dateIsSet)
    {
        val[U("send_date")] = ModelBase::toJson(m_Send_date);
    }

    return val;
}

void NotificationResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("data")))
    {
        if(!val[U("data")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("data")]);
            setData( newItem );
        }
    }
    if(val.has_field(U("notification_id")))
    {
        setNotificationId(ModelBase::stringFromJson(val[U("notification_id")]));
    }
    setNotificationTypeId(ModelBase::stringFromJson(val[U("notification_type_id")]));
    setRecipient(ModelBase::stringFromJson(val[U("recipient")]));
    setRecipientType(ModelBase::stringFromJson(val[U("recipient_type")]));
    if(val.has_field(U("send_date")))
    {
        setSendDate(ModelBase::int64_tFromJson(val[U("send_date")]));
    }
}

void NotificationResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DataIsSet)
    {
        if (m_Data.get())
        {
            m_Data->toMultipart(multipart, U("data."));
        }
        
    }
    if(m_Notification_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("notification_id"), m_Notification_id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("notification_type_id"), m_Notification_type_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient"), m_Recipient));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_type"), m_Recipient_type));
    if(m_Send_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("send_date"), m_Send_date));
    }
}

void NotificationResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("data")))
    {
        if(multipart->hasContent(U("data")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("data."));
            setData( newItem );
        }
    }
    if(multipart->hasContent(U("notification_id")))
    {
        setNotificationId(ModelBase::stringFromHttpContent(multipart->getContent(U("notification_id"))));
    }
    setNotificationTypeId(ModelBase::stringFromHttpContent(multipart->getContent(U("notification_type_id"))));
    setRecipient(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient"))));
    setRecipientType(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_type"))));
    if(multipart->hasContent(U("send_date")))
    {
        setSendDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("send_date"))));
    }
}

std::shared_ptr<Object> NotificationResource::getData() const
{
    return m_Data;
}


void NotificationResource::setData(std::shared_ptr<Object> value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool NotificationResource::dataIsSet() const
{
    return m_DataIsSet;
}

void NotificationResource::unsetData()
{
    m_DataIsSet = false;
}

utility::string_t NotificationResource::getNotificationId() const
{
    return m_Notification_id;
}


void NotificationResource::setNotificationId(utility::string_t value)
{
    m_Notification_id = value;
    m_Notification_idIsSet = true;
}
bool NotificationResource::notificationIdIsSet() const
{
    return m_Notification_idIsSet;
}

void NotificationResource::unsetNotification_id()
{
    m_Notification_idIsSet = false;
}

utility::string_t NotificationResource::getNotificationTypeId() const
{
    return m_Notification_type_id;
}


void NotificationResource::setNotificationTypeId(utility::string_t value)
{
    m_Notification_type_id = value;
    
}
utility::string_t NotificationResource::getRecipient() const
{
    return m_Recipient;
}


void NotificationResource::setRecipient(utility::string_t value)
{
    m_Recipient = value;
    
}
utility::string_t NotificationResource::getRecipientType() const
{
    return m_Recipient_type;
}


void NotificationResource::setRecipientType(utility::string_t value)
{
    m_Recipient_type = value;
    
}
int64_t NotificationResource::getSendDate() const
{
    return m_Send_date;
}


void NotificationResource::setSendDate(int64_t value)
{
    m_Send_date = value;
    m_Send_dateIsSet = true;
}
bool NotificationResource::sendDateIsSet() const
{
    return m_Send_dateIsSet;
}

void NotificationResource::unsetSend_date()
{
    m_Send_dateIsSet = false;
}

}
}
}
}
