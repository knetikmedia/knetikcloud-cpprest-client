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



#include "ChatMessageResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ChatMessageResource::ChatMessageResource()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Edited = false;
    m_EditedIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Message_type = U("");
    m_Recipient_id = U("");
    m_Recipient_type = U("");
    m_Sender_id = 0;
    m_Sender_idIsSet = false;
    m_Thread_id = U("");
    m_Thread_idIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

ChatMessageResource::~ChatMessageResource()
{
}

void ChatMessageResource::validate()
{
    // TODO: implement validation
}

web::json::value ChatMessageResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("content")] = ModelBase::toJson(m_Content);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_EditedIsSet)
    {
        val[U("edited")] = ModelBase::toJson(m_Edited);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("message_type")] = ModelBase::toJson(m_Message_type);
    val[U("recipient_id")] = ModelBase::toJson(m_Recipient_id);
    val[U("recipient_type")] = ModelBase::toJson(m_Recipient_type);
    if(m_Sender_idIsSet)
    {
        val[U("sender_id")] = ModelBase::toJson(m_Sender_id);
    }
    if(m_Thread_idIsSet)
    {
        val[U("thread_id")] = ModelBase::toJson(m_Thread_id);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void ChatMessageResource::fromJson(web::json::value& val)
{
    std::shared_ptr<Object> newContent(nullptr);
    newContent->fromJson(val[U("content")]);
    setContent( newContent );
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("edited")))
    {
        setEdited(ModelBase::boolFromJson(val[U("edited")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    setMessageType(ModelBase::stringFromJson(val[U("message_type")]));
    setRecipientId(ModelBase::stringFromJson(val[U("recipient_id")]));
    setRecipientType(ModelBase::stringFromJson(val[U("recipient_type")]));
    if(val.has_field(U("sender_id")))
    {
        setSenderId(ModelBase::int32_tFromJson(val[U("sender_id")]));
    }
    if(val.has_field(U("thread_id")))
    {
        setThreadId(ModelBase::stringFromJson(val[U("thread_id")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void ChatMessageResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    m_Content->toMultipart(multipart, U("content."));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_EditedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("edited"), m_Edited));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("message_type"), m_Message_type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_id"), m_Recipient_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_type"), m_Recipient_type));
    if(m_Sender_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sender_id"), m_Sender_id));
    }
    if(m_Thread_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("thread_id"), m_Thread_id));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void ChatMessageResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    std::shared_ptr<Object> newContent(nullptr);
    newContent->fromMultiPart(multipart, U("content."));
    setContent( newContent );
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("edited")))
    {
        setEdited(ModelBase::boolFromHttpContent(multipart->getContent(U("edited"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    setMessageType(ModelBase::stringFromHttpContent(multipart->getContent(U("message_type"))));
    setRecipientId(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_id"))));
    setRecipientType(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_type"))));
    if(multipart->hasContent(U("sender_id")))
    {
        setSenderId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("sender_id"))));
    }
    if(multipart->hasContent(U("thread_id")))
    {
        setThreadId(ModelBase::stringFromHttpContent(multipart->getContent(U("thread_id"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

std::shared_ptr<Object> ChatMessageResource::getContent() const
{
    return m_Content;
}


void ChatMessageResource::setContent(std::shared_ptr<Object> value)
{
    m_Content = value;
    
}
int64_t ChatMessageResource::getCreatedDate() const
{
    return m_Created_date;
}


void ChatMessageResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ChatMessageResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void ChatMessageResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

bool ChatMessageResource::getEdited() const
{
    return m_Edited;
}


void ChatMessageResource::setEdited(bool value)
{
    m_Edited = value;
    m_EditedIsSet = true;
}
bool ChatMessageResource::editedIsSet() const
{
    return m_EditedIsSet;
}

void ChatMessageResource::unsetEdited()
{
    m_EditedIsSet = false;
}

utility::string_t ChatMessageResource::getId() const
{
    return m_Id;
}


void ChatMessageResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ChatMessageResource::idIsSet() const
{
    return m_IdIsSet;
}

void ChatMessageResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t ChatMessageResource::getMessageType() const
{
    return m_Message_type;
}


void ChatMessageResource::setMessageType(utility::string_t value)
{
    m_Message_type = value;
    
}
utility::string_t ChatMessageResource::getRecipientId() const
{
    return m_Recipient_id;
}


void ChatMessageResource::setRecipientId(utility::string_t value)
{
    m_Recipient_id = value;
    
}
utility::string_t ChatMessageResource::getRecipientType() const
{
    return m_Recipient_type;
}


void ChatMessageResource::setRecipientType(utility::string_t value)
{
    m_Recipient_type = value;
    
}
int32_t ChatMessageResource::getSenderId() const
{
    return m_Sender_id;
}


void ChatMessageResource::setSenderId(int32_t value)
{
    m_Sender_id = value;
    m_Sender_idIsSet = true;
}
bool ChatMessageResource::senderIdIsSet() const
{
    return m_Sender_idIsSet;
}

void ChatMessageResource::unsetSender_id()
{
    m_Sender_idIsSet = false;
}

utility::string_t ChatMessageResource::getThreadId() const
{
    return m_Thread_id;
}


void ChatMessageResource::setThreadId(utility::string_t value)
{
    m_Thread_id = value;
    m_Thread_idIsSet = true;
}
bool ChatMessageResource::threadIdIsSet() const
{
    return m_Thread_idIsSet;
}

void ChatMessageResource::unsetThread_id()
{
    m_Thread_idIsSet = false;
}

int64_t ChatMessageResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void ChatMessageResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ChatMessageResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void ChatMessageResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

