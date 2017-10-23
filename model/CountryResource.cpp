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



#include "CountryResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CountryResource::CountryResource()
{
    m_Iso2 = U("");
    m_Iso2IsSet = false;
    m_Iso3 = U("");
    m_Iso3IsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
}

CountryResource::~CountryResource()
{
}

void CountryResource::validate()
{
    // TODO: implement validation
}

web::json::value CountryResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Iso2IsSet)
    {
        val[U("iso2")] = ModelBase::toJson(m_Iso2);
    }
    if(m_Iso3IsSet)
    {
        val[U("iso3")] = ModelBase::toJson(m_Iso3);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

void CountryResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("iso2")))
    {
        setIso2(ModelBase::stringFromJson(val[U("iso2")]));
    }
    if(val.has_field(U("iso3")))
    {
        setIso3(ModelBase::stringFromJson(val[U("iso3")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
}

void CountryResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Iso2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("iso2"), m_Iso2));
        
    }
    if(m_Iso3IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("iso3"), m_Iso3));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
}

void CountryResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("iso2")))
    {
        setIso2(ModelBase::stringFromHttpContent(multipart->getContent(U("iso2"))));
    }
    if(multipart->hasContent(U("iso3")))
    {
        setIso3(ModelBase::stringFromHttpContent(multipart->getContent(U("iso3"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
}

utility::string_t CountryResource::getIso2() const
{
    return m_Iso2;
}


void CountryResource::setIso2(utility::string_t value)
{
    m_Iso2 = value;
    m_Iso2IsSet = true;
}
bool CountryResource::iso2IsSet() const
{
    return m_Iso2IsSet;
}

void CountryResource::unsetIso2()
{
    m_Iso2IsSet = false;
}

utility::string_t CountryResource::getIso3() const
{
    return m_Iso3;
}


void CountryResource::setIso3(utility::string_t value)
{
    m_Iso3 = value;
    m_Iso3IsSet = true;
}
bool CountryResource::iso3IsSet() const
{
    return m_Iso3IsSet;
}

void CountryResource::unsetIso3()
{
    m_Iso3IsSet = false;
}

utility::string_t CountryResource::getName() const
{
    return m_Name;
}


void CountryResource::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CountryResource::nameIsSet() const
{
    return m_NameIsSet;
}

void CountryResource::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

