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



#include "CurrencyResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CurrencyResource::CurrencyResource()
{
    m_Active = false;
    m_ActiveIsSet = false;
    m_Code = U("");
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Factor = 0.0;
    m_Icon = U("");
    m_IconIsSet = false;
    m_Name = U("");
    m_Type = U("");
    m_TypeIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

CurrencyResource::~CurrencyResource()
{
}

void CurrencyResource::validate()
{
    // TODO: implement validation
}

web::json::value CurrencyResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ActiveIsSet)
    {
        val[U("active")] = ModelBase::toJson(m_Active);
    }
    val[U("code")] = ModelBase::toJson(m_Code);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    val[U("factor")] = ModelBase::toJson(m_Factor);
    if(m_IconIsSet)
    {
        val[U("icon")] = ModelBase::toJson(m_Icon);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void CurrencyResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("active")))
    {
        setActive(ModelBase::boolFromJson(val[U("active")]));
    }
    setCode(ModelBase::stringFromJson(val[U("code")]));
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    setFactor(ModelBase::doubleFromJson(val[U("factor")]));
    if(val.has_field(U("icon")))
    {
        setIcon(ModelBase::stringFromJson(val[U("icon")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void CurrencyResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("active"), m_Active));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("code"), m_Code));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("factor"), m_Factor));
    if(m_IconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("icon"), m_Icon));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void CurrencyResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(U("active"))));
    }
    setCode(ModelBase::stringFromHttpContent(multipart->getContent(U("code"))));
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    setFactor(ModelBase::doubleFromHttpContent(multipart->getContent(U("factor"))));
    if(multipart->hasContent(U("icon")))
    {
        setIcon(ModelBase::stringFromHttpContent(multipart->getContent(U("icon"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

bool CurrencyResource::getActive() const
{
    return m_Active;
}


void CurrencyResource::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool CurrencyResource::activeIsSet() const
{
    return m_ActiveIsSet;
}

void CurrencyResource::unsetActive()
{
    m_ActiveIsSet = false;
}

utility::string_t CurrencyResource::getCode() const
{
    return m_Code;
}


void CurrencyResource::setCode(utility::string_t value)
{
    m_Code = value;
    
}
int64_t CurrencyResource::getCreatedDate() const
{
    return m_Created_date;
}


void CurrencyResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool CurrencyResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void CurrencyResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

double CurrencyResource::getFactor() const
{
    return m_Factor;
}


void CurrencyResource::setFactor(double value)
{
    m_Factor = value;
    
}
utility::string_t CurrencyResource::getIcon() const
{
    return m_Icon;
}


void CurrencyResource::setIcon(utility::string_t value)
{
    m_Icon = value;
    m_IconIsSet = true;
}
bool CurrencyResource::iconIsSet() const
{
    return m_IconIsSet;
}

void CurrencyResource::unsetIcon()
{
    m_IconIsSet = false;
}

utility::string_t CurrencyResource::getName() const
{
    return m_Name;
}


void CurrencyResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t CurrencyResource::getType() const
{
    return m_Type;
}


void CurrencyResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool CurrencyResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void CurrencyResource::unsetType()
{
    m_TypeIsSet = false;
}

int64_t CurrencyResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void CurrencyResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool CurrencyResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void CurrencyResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

