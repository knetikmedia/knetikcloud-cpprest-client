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



#include "LocationLogResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

LocationLogResource::LocationLogResource()
{
    m_Country = U("");
    m_CountryIsSet = false;
    m_Ip = U("");
    m_IpIsSet = false;
    m_Time = 0L;
    m_TimeIsSet = false;
}

LocationLogResource::~LocationLogResource()
{
}

void LocationLogResource::validate()
{
    // TODO: implement validation
}

web::json::value LocationLogResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CountryIsSet)
    {
        val[U("country")] = ModelBase::toJson(m_Country);
    }
    if(m_IpIsSet)
    {
        val[U("ip")] = ModelBase::toJson(m_Ip);
    }
    if(m_TimeIsSet)
    {
        val[U("time")] = ModelBase::toJson(m_Time);
    }

    return val;
}

void LocationLogResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("country")))
    {
        setCountry(ModelBase::stringFromJson(val[U("country")]));
    }
    if(val.has_field(U("ip")))
    {
        setIp(ModelBase::stringFromJson(val[U("ip")]));
    }
    if(val.has_field(U("time")))
    {
        setTime(ModelBase::int64_tFromJson(val[U("time")]));
    }
}

void LocationLogResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("country"), m_Country));
        
    }
    if(m_IpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ip"), m_Ip));
        
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("time"), m_Time));
    }
}

void LocationLogResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("country")))
    {
        setCountry(ModelBase::stringFromHttpContent(multipart->getContent(U("country"))));
    }
    if(multipart->hasContent(U("ip")))
    {
        setIp(ModelBase::stringFromHttpContent(multipart->getContent(U("ip"))));
    }
    if(multipart->hasContent(U("time")))
    {
        setTime(ModelBase::int64_tFromHttpContent(multipart->getContent(U("time"))));
    }
}

utility::string_t LocationLogResource::getCountry() const
{
    return m_Country;
}


void LocationLogResource::setCountry(utility::string_t value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool LocationLogResource::countryIsSet() const
{
    return m_CountryIsSet;
}

void LocationLogResource::unsetCountry()
{
    m_CountryIsSet = false;
}

utility::string_t LocationLogResource::getIp() const
{
    return m_Ip;
}


void LocationLogResource::setIp(utility::string_t value)
{
    m_Ip = value;
    m_IpIsSet = true;
}
bool LocationLogResource::ipIsSet() const
{
    return m_IpIsSet;
}

void LocationLogResource::unsetIp()
{
    m_IpIsSet = false;
}

int64_t LocationLogResource::getTime() const
{
    return m_Time;
}


void LocationLogResource::setTime(int64_t value)
{
    m_Time = value;
    m_TimeIsSet = true;
}
bool LocationLogResource::timeIsSet() const
{
    return m_TimeIsSet;
}

void LocationLogResource::unsetTime()
{
    m_TimeIsSet = false;
}

}
}
}
}

