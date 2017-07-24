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



#include "AddressResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

AddressResource::AddressResource()
{
    m_Address1 = U("");
    m_Address2 = U("");
    m_Address2IsSet = false;
    m_City = U("");
    m_Country_code = U("");
    m_Postal_code = U("");
    m_Postal_codeIsSet = false;
    m_State_code = U("");
    m_State_codeIsSet = false;
}

AddressResource::~AddressResource()
{
}

void AddressResource::validate()
{
    // TODO: implement validation
}

web::json::value AddressResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("address1")] = ModelBase::toJson(m_Address1);
    if(m_Address2IsSet)
    {
        val[U("address2")] = ModelBase::toJson(m_Address2);
    }
    val[U("city")] = ModelBase::toJson(m_City);
    val[U("country_code")] = ModelBase::toJson(m_Country_code);
    if(m_Postal_codeIsSet)
    {
        val[U("postal_code")] = ModelBase::toJson(m_Postal_code);
    }
    if(m_State_codeIsSet)
    {
        val[U("state_code")] = ModelBase::toJson(m_State_code);
    }

    return val;
}

void AddressResource::fromJson(web::json::value& val)
{
    setAddress1(ModelBase::stringFromJson(val[U("address1")]));
    if(val.has_field(U("address2")))
    {
        setAddress2(ModelBase::stringFromJson(val[U("address2")]));
    }
    setCity(ModelBase::stringFromJson(val[U("city")]));
    setCountryCode(ModelBase::stringFromJson(val[U("country_code")]));
    if(val.has_field(U("postal_code")))
    {
        setPostalCode(ModelBase::stringFromJson(val[U("postal_code")]));
    }
    if(val.has_field(U("state_code")))
    {
        setStateCode(ModelBase::stringFromJson(val[U("state_code")]));
    }
}

void AddressResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("address1"), m_Address1));
    if(m_Address2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("address2"), m_Address2));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("city"), m_City));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("country_code"), m_Country_code));
    if(m_Postal_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("postal_code"), m_Postal_code));
        
    }
    if(m_State_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state_code"), m_State_code));
        
    }
}

void AddressResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setAddress1(ModelBase::stringFromHttpContent(multipart->getContent(U("address1"))));
    if(multipart->hasContent(U("address2")))
    {
        setAddress2(ModelBase::stringFromHttpContent(multipart->getContent(U("address2"))));
    }
    setCity(ModelBase::stringFromHttpContent(multipart->getContent(U("city"))));
    setCountryCode(ModelBase::stringFromHttpContent(multipart->getContent(U("country_code"))));
    if(multipart->hasContent(U("postal_code")))
    {
        setPostalCode(ModelBase::stringFromHttpContent(multipart->getContent(U("postal_code"))));
    }
    if(multipart->hasContent(U("state_code")))
    {
        setStateCode(ModelBase::stringFromHttpContent(multipart->getContent(U("state_code"))));
    }
}

utility::string_t AddressResource::getAddress1() const
{
    return m_Address1;
}


void AddressResource::setAddress1(utility::string_t value)
{
    m_Address1 = value;
    
}
utility::string_t AddressResource::getAddress2() const
{
    return m_Address2;
}


void AddressResource::setAddress2(utility::string_t value)
{
    m_Address2 = value;
    m_Address2IsSet = true;
}
bool AddressResource::address2IsSet() const
{
    return m_Address2IsSet;
}

void AddressResource::unsetAddress2()
{
    m_Address2IsSet = false;
}

utility::string_t AddressResource::getCity() const
{
    return m_City;
}


void AddressResource::setCity(utility::string_t value)
{
    m_City = value;
    
}
utility::string_t AddressResource::getCountryCode() const
{
    return m_Country_code;
}


void AddressResource::setCountryCode(utility::string_t value)
{
    m_Country_code = value;
    
}
utility::string_t AddressResource::getPostalCode() const
{
    return m_Postal_code;
}


void AddressResource::setPostalCode(utility::string_t value)
{
    m_Postal_code = value;
    m_Postal_codeIsSet = true;
}
bool AddressResource::postalCodeIsSet() const
{
    return m_Postal_codeIsSet;
}

void AddressResource::unsetPostal_code()
{
    m_Postal_codeIsSet = false;
}

utility::string_t AddressResource::getStateCode() const
{
    return m_State_code;
}


void AddressResource::setStateCode(utility::string_t value)
{
    m_State_code = value;
    m_State_codeIsSet = true;
}
bool AddressResource::stateCodeIsSet() const
{
    return m_State_codeIsSet;
}

void AddressResource::unsetState_code()
{
    m_State_codeIsSet = false;
}

}
}
}
}

