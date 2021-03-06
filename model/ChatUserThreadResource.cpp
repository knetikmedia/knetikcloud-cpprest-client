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



#include "ChatUserThreadResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ChatUserThreadResource::ChatUserThreadResource()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Read_count = 0;
    m_Read_countIsSet = false;
    m_ThreadIsSet = false;
    m_Thread_id = U("");
    m_Thread_idIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
}

ChatUserThreadResource::~ChatUserThreadResource()
{
}

void ChatUserThreadResource::validate()
{
    // TODO: implement validation
}

web::json::value ChatUserThreadResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_Read_countIsSet)
    {
        val[U("read_count")] = ModelBase::toJson(m_Read_count);
    }
    if(m_ThreadIsSet)
    {
        val[U("thread")] = ModelBase::toJson(m_Thread);
    }
    if(m_Thread_idIsSet)
    {
        val[U("thread_id")] = ModelBase::toJson(m_Thread_id);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }

    return val;
}

void ChatUserThreadResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("read_count")))
    {
        setReadCount(ModelBase::int32_tFromJson(val[U("read_count")]));
    }
    if(val.has_field(U("thread")))
    {
        if(!val[U("thread")].is_null())
        {
            std::shared_ptr<ChatThreadResource> newItem(new ChatThreadResource());
            newItem->fromJson(val[U("thread")]);
            setThread( newItem );
        }
    }
    if(val.has_field(U("thread_id")))
    {
        setThreadId(ModelBase::stringFromJson(val[U("thread_id")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
}

void ChatUserThreadResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_Read_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("read_count"), m_Read_count));
    }
    if(m_ThreadIsSet)
    {
        if (m_Thread.get())
        {
            m_Thread->toMultipart(multipart, U("thread."));
        }
        
    }
    if(m_Thread_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("thread_id"), m_Thread_id));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
}

void ChatUserThreadResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("read_count")))
    {
        setReadCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("read_count"))));
    }
    if(multipart->hasContent(U("thread")))
    {
        if(multipart->hasContent(U("thread")))
        {
            std::shared_ptr<ChatThreadResource> newItem(new ChatThreadResource());
            newItem->fromMultiPart(multipart, U("thread."));
            setThread( newItem );
        }
    }
    if(multipart->hasContent(U("thread_id")))
    {
        setThreadId(ModelBase::stringFromHttpContent(multipart->getContent(U("thread_id"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
}

int64_t ChatUserThreadResource::getCreatedDate() const
{
    return m_Created_date;
}


void ChatUserThreadResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ChatUserThreadResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void ChatUserThreadResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

int32_t ChatUserThreadResource::getReadCount() const
{
    return m_Read_count;
}


void ChatUserThreadResource::setReadCount(int32_t value)
{
    m_Read_count = value;
    m_Read_countIsSet = true;
}
bool ChatUserThreadResource::readCountIsSet() const
{
    return m_Read_countIsSet;
}

void ChatUserThreadResource::unsetRead_count()
{
    m_Read_countIsSet = false;
}

std::shared_ptr<ChatThreadResource> ChatUserThreadResource::getThread() const
{
    return m_Thread;
}


void ChatUserThreadResource::setThread(std::shared_ptr<ChatThreadResource> value)
{
    m_Thread = value;
    m_ThreadIsSet = true;
}
bool ChatUserThreadResource::threadIsSet() const
{
    return m_ThreadIsSet;
}

void ChatUserThreadResource::unsetThread()
{
    m_ThreadIsSet = false;
}

utility::string_t ChatUserThreadResource::getThreadId() const
{
    return m_Thread_id;
}


void ChatUserThreadResource::setThreadId(utility::string_t value)
{
    m_Thread_id = value;
    m_Thread_idIsSet = true;
}
bool ChatUserThreadResource::threadIdIsSet() const
{
    return m_Thread_idIsSet;
}

void ChatUserThreadResource::unsetThread_id()
{
    m_Thread_idIsSet = false;
}

int64_t ChatUserThreadResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void ChatUserThreadResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ChatUserThreadResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void ChatUserThreadResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

int32_t ChatUserThreadResource::getUserId() const
{
    return m_User_id;
}


void ChatUserThreadResource::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool ChatUserThreadResource::userIdIsSet() const
{
    return m_User_idIsSet;
}

void ChatUserThreadResource::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

