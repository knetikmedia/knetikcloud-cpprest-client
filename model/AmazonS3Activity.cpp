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



#include "AmazonS3Activity.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

AmazonS3Activity::AmazonS3Activity()
{
    m_Action = U("");
    m_ActionIsSet = false;
    m_Cdn_url = U("");
    m_Cdn_urlIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Filename = U("");
    m_FilenameIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Object_key = U("");
    m_Object_keyIsSet = false;
    m_Url = U("");
    m_UrlIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
}

AmazonS3Activity::~AmazonS3Activity()
{
}

void AmazonS3Activity::validate()
{
    // TODO: implement validation
}

web::json::value AmazonS3Activity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ActionIsSet)
    {
        val[U("action")] = ModelBase::toJson(m_Action);
    }
    if(m_Cdn_urlIsSet)
    {
        val[U("cdn_url")] = ModelBase::toJson(m_Cdn_url);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_FilenameIsSet)
    {
        val[U("filename")] = ModelBase::toJson(m_Filename);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Object_keyIsSet)
    {
        val[U("object_key")] = ModelBase::toJson(m_Object_key);
    }
    if(m_UrlIsSet)
    {
        val[U("url")] = ModelBase::toJson(m_Url);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }

    return val;
}

void AmazonS3Activity::fromJson(web::json::value& val)
{
    if(val.has_field(U("action")))
    {
        setAction(ModelBase::stringFromJson(val[U("action")]));
    }
    if(val.has_field(U("cdn_url")))
    {
        setCdnUrl(ModelBase::stringFromJson(val[U("cdn_url")]));
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("filename")))
    {
        setFilename(ModelBase::stringFromJson(val[U("filename")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("object_key")))
    {
        setObjectKey(ModelBase::stringFromJson(val[U("object_key")]));
    }
    if(val.has_field(U("url")))
    {
        setUrl(ModelBase::stringFromJson(val[U("url")]));
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
}

void AmazonS3Activity::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("action"), m_Action));
        
    }
    if(m_Cdn_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("cdn_url"), m_Cdn_url));
        
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_FilenameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("filename"), m_Filename));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Object_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("object_key"), m_Object_key));
        
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
}

void AmazonS3Activity::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("action")))
    {
        setAction(ModelBase::stringFromHttpContent(multipart->getContent(U("action"))));
    }
    if(multipart->hasContent(U("cdn_url")))
    {
        setCdnUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("cdn_url"))));
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("filename")))
    {
        setFilename(ModelBase::stringFromHttpContent(multipart->getContent(U("filename"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("object_key")))
    {
        setObjectKey(ModelBase::stringFromHttpContent(multipart->getContent(U("object_key"))));
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
}

utility::string_t AmazonS3Activity::getAction() const
{
    return m_Action;
}


void AmazonS3Activity::setAction(utility::string_t value)
{
    m_Action = value;
    m_ActionIsSet = true;
}
bool AmazonS3Activity::actionIsSet() const
{
    return m_ActionIsSet;
}

void AmazonS3Activity::unsetAction()
{
    m_ActionIsSet = false;
}

utility::string_t AmazonS3Activity::getCdnUrl() const
{
    return m_Cdn_url;
}


void AmazonS3Activity::setCdnUrl(utility::string_t value)
{
    m_Cdn_url = value;
    m_Cdn_urlIsSet = true;
}
bool AmazonS3Activity::cdnUrlIsSet() const
{
    return m_Cdn_urlIsSet;
}

void AmazonS3Activity::unsetCdn_url()
{
    m_Cdn_urlIsSet = false;
}

int64_t AmazonS3Activity::getCreatedDate() const
{
    return m_Created_date;
}


void AmazonS3Activity::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool AmazonS3Activity::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void AmazonS3Activity::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t AmazonS3Activity::getFilename() const
{
    return m_Filename;
}


void AmazonS3Activity::setFilename(utility::string_t value)
{
    m_Filename = value;
    m_FilenameIsSet = true;
}
bool AmazonS3Activity::filenameIsSet() const
{
    return m_FilenameIsSet;
}

void AmazonS3Activity::unsetFilename()
{
    m_FilenameIsSet = false;
}

int64_t AmazonS3Activity::getId() const
{
    return m_Id;
}


void AmazonS3Activity::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool AmazonS3Activity::idIsSet() const
{
    return m_IdIsSet;
}

void AmazonS3Activity::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t AmazonS3Activity::getObjectKey() const
{
    return m_Object_key;
}


void AmazonS3Activity::setObjectKey(utility::string_t value)
{
    m_Object_key = value;
    m_Object_keyIsSet = true;
}
bool AmazonS3Activity::objectKeyIsSet() const
{
    return m_Object_keyIsSet;
}

void AmazonS3Activity::unsetObject_key()
{
    m_Object_keyIsSet = false;
}

utility::string_t AmazonS3Activity::getUrl() const
{
    return m_Url;
}


void AmazonS3Activity::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool AmazonS3Activity::urlIsSet() const
{
    return m_UrlIsSet;
}

void AmazonS3Activity::unsetUrl()
{
    m_UrlIsSet = false;
}

int32_t AmazonS3Activity::getUserId() const
{
    return m_User_id;
}


void AmazonS3Activity::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool AmazonS3Activity::userIdIsSet() const
{
    return m_User_idIsSet;
}

void AmazonS3Activity::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

