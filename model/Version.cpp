/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Version.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Version::Version()
{
    m_Version = U("");
    m_VersionIsSet = false;
    
}

Version::~Version()
{
}

void Version::validate()
{
    // TODO: implement validation
}

web::json::value Version::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_VersionIsSet)
    {
        val[U("version")] = ModelBase::toJson(m_Version);
    }
    

    return val;
}

void Version::fromJson(web::json::value& val)
{
    if(val.has_field(U("version")))
    {
        setVersion(ModelBase::stringFromJson(val[U("version")]));
        
    }
    
}

void Version::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("version"), m_Version));
        
    }
    
}

void Version::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("version")))
    {
        setVersion(ModelBase::stringFromHttpContent(multipart->getContent(U("version"))));
        
    }
    
}


utility::string_t Version::getVersion() const
{
    return m_Version;
}
void Version::setVersion(utility::string_t value)
{
    m_Version = value;
    m_VersionIsSet = true;
}
bool Version::versionIsSet() const
{
    return m_VersionIsSet;
}
void Version::unsetVersion()
{
    m_VersionIsSet = false;
}

}
}
}
}

