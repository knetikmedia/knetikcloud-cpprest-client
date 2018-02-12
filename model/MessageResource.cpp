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



#include "MessageResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

MessageResource::MessageResource()
{
    m_Recipient = U("");
    m_RecipientIsSet = false;
    m_Recipient_type = U("");
    m_Recipient_typeIsSet = false;
    m_Subject = U("");
    m_SubjectIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

MessageResource::~MessageResource()
{
}

void MessageResource::validate()
{
    // TODO: implement validation
}

web::json::value MessageResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("content")] = ModelBase::toJson(m_Content);
    if(m_RecipientIsSet)
    {
        val[U("recipient")] = ModelBase::toJson(m_Recipient);
    }
    if(m_Recipient_typeIsSet)
    {
        val[U("recipient_type")] = ModelBase::toJson(m_Recipient_type);
    }
    if(m_SubjectIsSet)
    {
        val[U("subject")] = ModelBase::toJson(m_Subject);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void MessageResource::fromJson(web::json::value& val)
{
    std::shared_ptr<MessageContentResource> newContent(new MessageContentResource());
    newContent->fromJson(val[U("content")]);
    setContent( newContent );
    if(val.has_field(U("recipient")))
    {
        setRecipient(ModelBase::stringFromJson(val[U("recipient")]));
    }
    if(val.has_field(U("recipient_type")))
    {
        setRecipientType(ModelBase::stringFromJson(val[U("recipient_type")]));
    }
    if(val.has_field(U("subject")))
    {
        setSubject(ModelBase::stringFromJson(val[U("subject")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void MessageResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    m_Content->toMultipart(multipart, U("content."));
    if(m_RecipientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient"), m_Recipient));
        
    }
    if(m_Recipient_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("recipient_type"), m_Recipient_type));
        
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("subject"), m_Subject));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void MessageResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    std::shared_ptr<MessageContentResource> newContent(new MessageContentResource());
    newContent->fromMultiPart(multipart, U("content."));
    setContent( newContent );
    if(multipart->hasContent(U("recipient")))
    {
        setRecipient(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient"))));
    }
    if(multipart->hasContent(U("recipient_type")))
    {
        setRecipientType(ModelBase::stringFromHttpContent(multipart->getContent(U("recipient_type"))));
    }
    if(multipart->hasContent(U("subject")))
    {
        setSubject(ModelBase::stringFromHttpContent(multipart->getContent(U("subject"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

std::shared_ptr<MessageContentResource> MessageResource::getContent() const
{
    return m_Content;
}


void MessageResource::setContent(std::shared_ptr<MessageContentResource> value)
{
    m_Content = value;
    
}
utility::string_t MessageResource::getRecipient() const
{
    return m_Recipient;
}


void MessageResource::setRecipient(utility::string_t value)
{
    m_Recipient = value;
    m_RecipientIsSet = true;
}
bool MessageResource::recipientIsSet() const
{
    return m_RecipientIsSet;
}

void MessageResource::unsetRecipient()
{
    m_RecipientIsSet = false;
}

utility::string_t MessageResource::getRecipientType() const
{
    return m_Recipient_type;
}


void MessageResource::setRecipientType(utility::string_t value)
{
    m_Recipient_type = value;
    m_Recipient_typeIsSet = true;
}
bool MessageResource::recipientTypeIsSet() const
{
    return m_Recipient_typeIsSet;
}

void MessageResource::unsetRecipient_type()
{
    m_Recipient_typeIsSet = false;
}

utility::string_t MessageResource::getSubject() const
{
    return m_Subject;
}


void MessageResource::setSubject(utility::string_t value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}
bool MessageResource::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void MessageResource::unsetSubject()
{
    m_SubjectIsSet = false;
}

utility::string_t MessageResource::getType() const
{
    return m_Type;
}


void MessageResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool MessageResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void MessageResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

