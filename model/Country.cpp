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



#include "Country.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Country::Country()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Iso2 = U("");
    m_Iso2IsSet = false;
    m_Iso3 = U("");
    m_Iso3IsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
}

Country::~Country()
{
}

void Country::validate()
{
    // TODO: implement validation
}

web::json::value Country::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
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

void Country::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
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

void Country::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
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

void Country::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
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

int32_t Country::getId() const
{
    return m_Id;
}


void Country::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Country::idIsSet() const
{
    return m_IdIsSet;
}

void Country::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Country::getIso2() const
{
    return m_Iso2;
}


void Country::setIso2(utility::string_t value)
{
    m_Iso2 = value;
    m_Iso2IsSet = true;
}
bool Country::iso2IsSet() const
{
    return m_Iso2IsSet;
}

void Country::unsetIso2()
{
    m_Iso2IsSet = false;
}

utility::string_t Country::getIso3() const
{
    return m_Iso3;
}


void Country::setIso3(utility::string_t value)
{
    m_Iso3 = value;
    m_Iso3IsSet = true;
}
bool Country::iso3IsSet() const
{
    return m_Iso3IsSet;
}

void Country::unsetIso3()
{
    m_Iso3IsSet = false;
}

utility::string_t Country::getName() const
{
    return m_Name;
}


void Country::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Country::nameIsSet() const
{
    return m_NameIsSet;
}

void Country::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

