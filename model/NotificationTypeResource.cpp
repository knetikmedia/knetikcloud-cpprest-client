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



#include "NotificationTypeResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

NotificationTypeResource::NotificationTypeResource()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Email_body_template_external = false;
    m_Email_body_template_externalIsSet = false;
    m_Email_body_template_id = U("");
    m_Email_body_template_idIsSet = false;
    m_Email_subject_template_id = U("");
    m_Email_subject_template_idIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_Sms_template_id = U("");
    m_Sms_template_idIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

NotificationTypeResource::~NotificationTypeResource()
{
}

void NotificationTypeResource::validate()
{
    // TODO: implement validation
}

web::json::value NotificationTypeResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_Email_body_template_externalIsSet)
    {
        val[U("email_body_template_external")] = ModelBase::toJson(m_Email_body_template_external);
    }
    if(m_Email_body_template_idIsSet)
    {
        val[U("email_body_template_id")] = ModelBase::toJson(m_Email_body_template_id);
    }
    if(m_Email_subject_template_idIsSet)
    {
        val[U("email_subject_template_id")] = ModelBase::toJson(m_Email_subject_template_id);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Sms_template_idIsSet)
    {
        val[U("sms_template_id")] = ModelBase::toJson(m_Sms_template_id);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void NotificationTypeResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("email_body_template_external")))
    {
        setEmailBodyTemplateExternal(ModelBase::boolFromJson(val[U("email_body_template_external")]));
    }
    if(val.has_field(U("email_body_template_id")))
    {
        setEmailBodyTemplateId(ModelBase::stringFromJson(val[U("email_body_template_id")]));
    }
    if(val.has_field(U("email_subject_template_id")))
    {
        setEmailSubjectTemplateId(ModelBase::stringFromJson(val[U("email_subject_template_id")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("sms_template_id")))
    {
        setSmsTemplateId(ModelBase::stringFromJson(val[U("sms_template_id")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void NotificationTypeResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Email_body_template_externalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("email_body_template_external"), m_Email_body_template_external));
    }
    if(m_Email_body_template_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("email_body_template_id"), m_Email_body_template_id));
        
    }
    if(m_Email_subject_template_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("email_subject_template_id"), m_Email_subject_template_id));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Sms_template_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sms_template_id"), m_Sms_template_id));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void NotificationTypeResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("email_body_template_external")))
    {
        setEmailBodyTemplateExternal(ModelBase::boolFromHttpContent(multipart->getContent(U("email_body_template_external"))));
    }
    if(multipart->hasContent(U("email_body_template_id")))
    {
        setEmailBodyTemplateId(ModelBase::stringFromHttpContent(multipart->getContent(U("email_body_template_id"))));
    }
    if(multipart->hasContent(U("email_subject_template_id")))
    {
        setEmailSubjectTemplateId(ModelBase::stringFromHttpContent(multipart->getContent(U("email_subject_template_id"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("sms_template_id")))
    {
        setSmsTemplateId(ModelBase::stringFromHttpContent(multipart->getContent(U("sms_template_id"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

int64_t NotificationTypeResource::getCreatedDate() const
{
    return m_Created_date;
}


void NotificationTypeResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool NotificationTypeResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void NotificationTypeResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

bool NotificationTypeResource::getEmailBodyTemplateExternal() const
{
    return m_Email_body_template_external;
}


void NotificationTypeResource::setEmailBodyTemplateExternal(bool value)
{
    m_Email_body_template_external = value;
    m_Email_body_template_externalIsSet = true;
}
bool NotificationTypeResource::emailBodyTemplateExternalIsSet() const
{
    return m_Email_body_template_externalIsSet;
}

void NotificationTypeResource::unsetEmail_body_template_external()
{
    m_Email_body_template_externalIsSet = false;
}

utility::string_t NotificationTypeResource::getEmailBodyTemplateId() const
{
    return m_Email_body_template_id;
}


void NotificationTypeResource::setEmailBodyTemplateId(utility::string_t value)
{
    m_Email_body_template_id = value;
    m_Email_body_template_idIsSet = true;
}
bool NotificationTypeResource::emailBodyTemplateIdIsSet() const
{
    return m_Email_body_template_idIsSet;
}

void NotificationTypeResource::unsetEmail_body_template_id()
{
    m_Email_body_template_idIsSet = false;
}

utility::string_t NotificationTypeResource::getEmailSubjectTemplateId() const
{
    return m_Email_subject_template_id;
}


void NotificationTypeResource::setEmailSubjectTemplateId(utility::string_t value)
{
    m_Email_subject_template_id = value;
    m_Email_subject_template_idIsSet = true;
}
bool NotificationTypeResource::emailSubjectTemplateIdIsSet() const
{
    return m_Email_subject_template_idIsSet;
}

void NotificationTypeResource::unsetEmail_subject_template_id()
{
    m_Email_subject_template_idIsSet = false;
}

utility::string_t NotificationTypeResource::getId() const
{
    return m_Id;
}


void NotificationTypeResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool NotificationTypeResource::idIsSet() const
{
    return m_IdIsSet;
}

void NotificationTypeResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t NotificationTypeResource::getName() const
{
    return m_Name;
}


void NotificationTypeResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t NotificationTypeResource::getSmsTemplateId() const
{
    return m_Sms_template_id;
}


void NotificationTypeResource::setSmsTemplateId(utility::string_t value)
{
    m_Sms_template_id = value;
    m_Sms_template_idIsSet = true;
}
bool NotificationTypeResource::smsTemplateIdIsSet() const
{
    return m_Sms_template_idIsSet;
}

void NotificationTypeResource::unsetSms_template_id()
{
    m_Sms_template_idIsSet = false;
}

int64_t NotificationTypeResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void NotificationTypeResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool NotificationTypeResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void NotificationTypeResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

