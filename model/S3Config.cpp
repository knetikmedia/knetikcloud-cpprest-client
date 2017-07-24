/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "S3Config.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

S3Config::S3Config()
{
    m_Bucket_name = U("");
    m_Bucket_nameIsSet = false;
    m_Cdn_url = U("");
    m_Cdn_urlIsSet = false;
    m_Region = U("");
    m_RegionIsSet = false;
    m_Upload_prefix = U("");
    m_Upload_prefixIsSet = false;
}

S3Config::~S3Config()
{
}

void S3Config::validate()
{
    // TODO: implement validation
}

web::json::value S3Config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Bucket_nameIsSet)
    {
        val[U("bucket_name")] = ModelBase::toJson(m_Bucket_name);
    }
    if(m_Cdn_urlIsSet)
    {
        val[U("cdn_url")] = ModelBase::toJson(m_Cdn_url);
    }
    if(m_RegionIsSet)
    {
        val[U("region")] = ModelBase::toJson(m_Region);
    }
    if(m_Upload_prefixIsSet)
    {
        val[U("upload_prefix")] = ModelBase::toJson(m_Upload_prefix);
    }

    return val;
}

void S3Config::fromJson(web::json::value& val)
{
    if(val.has_field(U("bucket_name")))
    {
        setBucketName(ModelBase::stringFromJson(val[U("bucket_name")]));
    }
    if(val.has_field(U("cdn_url")))
    {
        setCdnUrl(ModelBase::stringFromJson(val[U("cdn_url")]));
    }
    if(val.has_field(U("region")))
    {
        setRegion(ModelBase::stringFromJson(val[U("region")]));
    }
    if(val.has_field(U("upload_prefix")))
    {
        setUploadPrefix(ModelBase::stringFromJson(val[U("upload_prefix")]));
    }
}

void S3Config::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Bucket_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("bucket_name"), m_Bucket_name));
        
    }
    if(m_Cdn_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("cdn_url"), m_Cdn_url));
        
    }
    if(m_RegionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("region"), m_Region));
        
    }
    if(m_Upload_prefixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("upload_prefix"), m_Upload_prefix));
        
    }
}

void S3Config::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("bucket_name")))
    {
        setBucketName(ModelBase::stringFromHttpContent(multipart->getContent(U("bucket_name"))));
    }
    if(multipart->hasContent(U("cdn_url")))
    {
        setCdnUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("cdn_url"))));
    }
    if(multipart->hasContent(U("region")))
    {
        setRegion(ModelBase::stringFromHttpContent(multipart->getContent(U("region"))));
    }
    if(multipart->hasContent(U("upload_prefix")))
    {
        setUploadPrefix(ModelBase::stringFromHttpContent(multipart->getContent(U("upload_prefix"))));
    }
}

utility::string_t S3Config::getBucketName() const
{
    return m_Bucket_name;
}


void S3Config::setBucketName(utility::string_t value)
{
    m_Bucket_name = value;
    m_Bucket_nameIsSet = true;
}
bool S3Config::bucketNameIsSet() const
{
    return m_Bucket_nameIsSet;
}

void S3Config::unsetBucket_name()
{
    m_Bucket_nameIsSet = false;
}

utility::string_t S3Config::getCdnUrl() const
{
    return m_Cdn_url;
}


void S3Config::setCdnUrl(utility::string_t value)
{
    m_Cdn_url = value;
    m_Cdn_urlIsSet = true;
}
bool S3Config::cdnUrlIsSet() const
{
    return m_Cdn_urlIsSet;
}

void S3Config::unsetCdn_url()
{
    m_Cdn_urlIsSet = false;
}

utility::string_t S3Config::getRegion() const
{
    return m_Region;
}


void S3Config::setRegion(utility::string_t value)
{
    m_Region = value;
    m_RegionIsSet = true;
}
bool S3Config::regionIsSet() const
{
    return m_RegionIsSet;
}

void S3Config::unsetRegion()
{
    m_RegionIsSet = false;
}

utility::string_t S3Config::getUploadPrefix() const
{
    return m_Upload_prefix;
}


void S3Config::setUploadPrefix(utility::string_t value)
{
    m_Upload_prefix = value;
    m_Upload_prefixIsSet = true;
}
bool S3Config::uploadPrefixIsSet() const
{
    return m_Upload_prefixIsSet;
}

void S3Config::unsetUpload_prefix()
{
    m_Upload_prefixIsSet = false;
}

}
}
}
}

