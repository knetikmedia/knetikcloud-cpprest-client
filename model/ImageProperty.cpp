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



#include "ImageProperty.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ImageProperty::ImageProperty()
{
}

ImageProperty::~ImageProperty()
{
}

void ImageProperty::validate()
{
    // TODO: implement validation
}

web::json::value ImageProperty::toJson() const
{
    web::json::value val = this->FileProperty::toJson();


    return val;
}

void ImageProperty::fromJson(web::json::value& val)
{
    this->FileProperty::fromJson(val);

}

void ImageProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_CrcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("crc"), m_Crc));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_File_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("file_type"), m_File_type));
        
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
}

void ImageProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("crc")))
    {
        setCrc(ModelBase::stringFromHttpContent(multipart->getContent(U("crc"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("file_type")))
    {
        setFileType(ModelBase::stringFromHttpContent(multipart->getContent(U("file_type"))));
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
    }
}

}
}
}
}
