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



#include "ChatThreadResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ChatThreadResource::ChatThreadResource()
{
    m_Active_users = 0;
    m_Active_usersIsSet = false;
    m_Count = 0;
    m_CountIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Recipient_id = U("");
    m_Recipient_type = U("");
    m_Subject = U("");
    m_SubjectIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

ChatThreadResource::~ChatThreadResource()
{
}

void ChatThreadResource::validate()
{
    // TODO: implement validation
}

web::json::value ChatThreadResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Active_usersIsSet)
    {
        val[U("active_users")] = ModelBase::toJson(m_Active_users);
    }
    if(m_CountIsSet)
    {
        val[U("count")] = ModelBase::toJson(m_Count);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("recipient_id")] = ModelBase::toJson(m_Recipient_id);
    val[U("recipient_type")] = ModelBase::toJson(m_Recipient_type);
    if(m_SubjectIsSet)
    {
        val[U("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void ChatThreadResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("active_users")))
    {
        setActiveUsers(ModelBase::int32_tFromJson(val[U("active_users")]));
    }
    if(val.has_field(U("count")))
    {
        setCount(ModelBase::int32_tFromJson(val[U("count")]));
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    setRecipientId(ModelBase::stringFromJson(val[U("recipient_id")]));
    setRecipientType(ModelBase::stringFromJson(val[U("recipient_type")]));
    if(val.has_field(U("subject")))
    {
        setSubject(ModelBase::stringFromJson(val[U("subject")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void ChatThreadResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Active_usersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("active_users"), m_Active_users));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("count"), m_Count));
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_id"), m_Recipient_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_type"), m_Recipient_type));
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("subject"), m_Subject));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void ChatThreadResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("active_users")))
    {
        setActiveUsers(ModelBase::int32_tFromHttpContent(multipart->getContent(U("active_users"))));
    }
    if(multipart->hasContent(U("count")))
    {
        setCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("count"))));
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    setRecipientId(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_id"))));
    setRecipientType(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_type"))));
    if(multipart->hasContent(U("subject")))
    {
        setSubject(ModelBase::stringFromHttpContent(multipart->getContent(U("subject"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

int32_t ChatThreadResource::getActiveUsers() const
{
    return m_Active_users;
}


void ChatThreadResource::setActiveUsers(int32_t value)
{
    m_Active_users = value;
    m_Active_usersIsSet = true;
}
bool ChatThreadResource::activeUsersIsSet() const
{
    return m_Active_usersIsSet;
}

void ChatThreadResource::unsetActive_users()
{
    m_Active_usersIsSet = false;
}

int32_t ChatThreadResource::getCount() const
{
    return m_Count;
}


void ChatThreadResource::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool ChatThreadResource::countIsSet() const
{
    return m_CountIsSet;
}

void ChatThreadResource::unsetCount()
{
    m_CountIsSet = false;
}

int64_t ChatThreadResource::getCreatedDate() const
{
    return m_Created_date;
}


void ChatThreadResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ChatThreadResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void ChatThreadResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t ChatThreadResource::getId() const
{
    return m_Id;
}


void ChatThreadResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ChatThreadResource::idIsSet() const
{
    return m_IdIsSet;
}

void ChatThreadResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t ChatThreadResource::getRecipientId() const
{
    return m_Recipient_id;
}


void ChatThreadResource::setRecipientId(utility::string_t value)
{
    m_Recipient_id = value;
    
}
utility::string_t ChatThreadResource::getRecipientType() const
{
    return m_Recipient_type;
}


void ChatThreadResource::setRecipientType(utility::string_t value)
{
    m_Recipient_type = value;
    
}
utility::string_t ChatThreadResource::getSubject() const
{
    return m_Subject;
}


void ChatThreadResource::setSubject(utility::string_t value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}
bool ChatThreadResource::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void ChatThreadResource::unsetSubject()
{
    m_SubjectIsSet = false;
}

int64_t ChatThreadResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void ChatThreadResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ChatThreadResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void ChatThreadResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

