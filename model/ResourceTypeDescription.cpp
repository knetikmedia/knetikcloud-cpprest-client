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



#include "ResourceTypeDescription.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ResourceTypeDescription::ResourceTypeDescription()
{
    m_Id_field = U("");
    m_Name = U("");
    m_Service_path = U("");
}

ResourceTypeDescription::~ResourceTypeDescription()
{
}

void ResourceTypeDescription::validate()
{
    // TODO: implement validation
}

web::json::value ResourceTypeDescription::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("id_field")] = ModelBase::toJson(m_Id_field);
    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("service_path")] = ModelBase::toJson(m_Service_path);

    return val;
}

void ResourceTypeDescription::fromJson(web::json::value& val)
{
    setIdField(ModelBase::stringFromJson(val[U("id_field")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    setServicePath(ModelBase::stringFromJson(val[U("service_path")]));
}

void ResourceTypeDescription::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("id_field"), m_Id_field));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("service_path"), m_Service_path));
}

void ResourceTypeDescription::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setIdField(ModelBase::stringFromHttpContent(multipart->getContent(U("id_field"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setServicePath(ModelBase::stringFromHttpContent(multipart->getContent(U("service_path"))));
}

utility::string_t ResourceTypeDescription::getIdField() const
{
    return m_Id_field;
}


void ResourceTypeDescription::setIdField(utility::string_t value)
{
    m_Id_field = value;
    
}
utility::string_t ResourceTypeDescription::getName() const
{
    return m_Name;
}


void ResourceTypeDescription::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t ResourceTypeDescription::getServicePath() const
{
    return m_Service_path;
}


void ResourceTypeDescription::setServicePath(utility::string_t value)
{
    m_Service_path = value;
    
}
}
}
}
}
