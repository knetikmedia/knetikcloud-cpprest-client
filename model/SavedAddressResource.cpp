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



#include "SavedAddressResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SavedAddressResource::SavedAddressResource()
{
    m_Address1 = U("");
    m_Address2 = U("");
    m_Address2IsSet = false;
    m_City = U("");
    m_Country_code = U("");
    m_Default = false;
    m_DefaultIsSet = false;
    m_First_name = U("");
    m_Id = 0;
    m_IdIsSet = false;
    m_Last_name = U("");
    m_Name = U("");
    m_Phone1 = U("");
    m_Phone1IsSet = false;
    m_Phone2 = U("");
    m_Phone2IsSet = false;
    m_Postal_code = U("");
    m_Postal_codeIsSet = false;
    m_State_code = U("");
    m_State_codeIsSet = false;
    
}

SavedAddressResource::~SavedAddressResource()
{
}

void SavedAddressResource::validate()
{
    // TODO: implement validation
}

web::json::value SavedAddressResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("address1")] = ModelBase::toJson(m_Address1);
    if(m_Address2IsSet)
    {
        val[U("address2")] = ModelBase::toJson(m_Address2);
    }
    val[U("city")] = ModelBase::toJson(m_City);
    val[U("country_code")] = ModelBase::toJson(m_Country_code);
    if(m_DefaultIsSet)
    {
        val[U("default")] = ModelBase::toJson(m_Default);
    }
    val[U("first_name")] = ModelBase::toJson(m_First_name);
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("last_name")] = ModelBase::toJson(m_Last_name);
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Phone1IsSet)
    {
        val[U("phone1")] = ModelBase::toJson(m_Phone1);
    }
    if(m_Phone2IsSet)
    {
        val[U("phone2")] = ModelBase::toJson(m_Phone2);
    }
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

void SavedAddressResource::fromJson(web::json::value& val)
{
    setAddress1(ModelBase::stringFromJson(val[U("address1")]));
    if(val.has_field(U("address2")))
    {
        setAddress2(ModelBase::stringFromJson(val[U("address2")]));
        
    }
    setCity(ModelBase::stringFromJson(val[U("city")]));
    setCountryCode(ModelBase::stringFromJson(val[U("country_code")]));
    if(val.has_field(U("default")))
    {
        setDefault(ModelBase::boolFromJson(val[U("default")]));
    }
    setFirstName(ModelBase::stringFromJson(val[U("first_name")]));
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    setLastName(ModelBase::stringFromJson(val[U("last_name")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("phone1")))
    {
        setPhone1(ModelBase::stringFromJson(val[U("phone1")]));
        
    }
    if(val.has_field(U("phone2")))
    {
        setPhone2(ModelBase::stringFromJson(val[U("phone2")]));
        
    }
    if(val.has_field(U("postal_code")))
    {
        setPostalCode(ModelBase::stringFromJson(val[U("postal_code")]));
        
    }
    if(val.has_field(U("state_code")))
    {
        setStateCode(ModelBase::stringFromJson(val[U("state_code")]));
        
    }
    
}

void SavedAddressResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("default"), m_Default));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("first_name"), m_First_name));
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("last_name"), m_Last_name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Phone1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("phone1"), m_Phone1));
        
    }
    if(m_Phone2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("phone2"), m_Phone2));
        
    }
    if(m_Postal_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("postal_code"), m_Postal_code));
        
    }
    if(m_State_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state_code"), m_State_code));
        
    }
    
}

void SavedAddressResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("default")))
    {
        setDefault(ModelBase::boolFromHttpContent(multipart->getContent(U("default"))));
    }
    setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(U("first_name"))));
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    setLastName(ModelBase::stringFromHttpContent(multipart->getContent(U("last_name"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("phone1")))
    {
        setPhone1(ModelBase::stringFromHttpContent(multipart->getContent(U("phone1"))));
        
    }
    if(multipart->hasContent(U("phone2")))
    {
        setPhone2(ModelBase::stringFromHttpContent(multipart->getContent(U("phone2"))));
        
    }
    if(multipart->hasContent(U("postal_code")))
    {
        setPostalCode(ModelBase::stringFromHttpContent(multipart->getContent(U("postal_code"))));
        
    }
    if(multipart->hasContent(U("state_code")))
    {
        setStateCode(ModelBase::stringFromHttpContent(multipart->getContent(U("state_code"))));
        
    }
    
}


utility::string_t SavedAddressResource::getAddress1() const
{
    return m_Address1;
}
void SavedAddressResource::setAddress1(utility::string_t value)
{
    m_Address1 = value;
    
}
utility::string_t SavedAddressResource::getAddress2() const
{
    return m_Address2;
}
void SavedAddressResource::setAddress2(utility::string_t value)
{
    m_Address2 = value;
    m_Address2IsSet = true;
}
bool SavedAddressResource::address2IsSet() const
{
    return m_Address2IsSet;
}
void SavedAddressResource::unsetAddress2()
{
    m_Address2IsSet = false;
}
utility::string_t SavedAddressResource::getCity() const
{
    return m_City;
}
void SavedAddressResource::setCity(utility::string_t value)
{
    m_City = value;
    
}
utility::string_t SavedAddressResource::getCountryCode() const
{
    return m_Country_code;
}
void SavedAddressResource::setCountryCode(utility::string_t value)
{
    m_Country_code = value;
    
}
bool SavedAddressResource::getDefault() const
{
    return m_Default;
}
void SavedAddressResource::setDefault(bool value)
{
    m_Default = value;
    m_DefaultIsSet = true;
}
bool SavedAddressResource::defaultIsSet() const
{
    return m_DefaultIsSet;
}
void SavedAddressResource::unsetDefault()
{
    m_DefaultIsSet = false;
}
utility::string_t SavedAddressResource::getFirstName() const
{
    return m_First_name;
}
void SavedAddressResource::setFirstName(utility::string_t value)
{
    m_First_name = value;
    
}
int32_t SavedAddressResource::getId() const
{
    return m_Id;
}
void SavedAddressResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SavedAddressResource::idIsSet() const
{
    return m_IdIsSet;
}
void SavedAddressResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SavedAddressResource::getLastName() const
{
    return m_Last_name;
}
void SavedAddressResource::setLastName(utility::string_t value)
{
    m_Last_name = value;
    
}
utility::string_t SavedAddressResource::getName() const
{
    return m_Name;
}
void SavedAddressResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t SavedAddressResource::getPhone1() const
{
    return m_Phone1;
}
void SavedAddressResource::setPhone1(utility::string_t value)
{
    m_Phone1 = value;
    m_Phone1IsSet = true;
}
bool SavedAddressResource::phone1IsSet() const
{
    return m_Phone1IsSet;
}
void SavedAddressResource::unsetPhone1()
{
    m_Phone1IsSet = false;
}
utility::string_t SavedAddressResource::getPhone2() const
{
    return m_Phone2;
}
void SavedAddressResource::setPhone2(utility::string_t value)
{
    m_Phone2 = value;
    m_Phone2IsSet = true;
}
bool SavedAddressResource::phone2IsSet() const
{
    return m_Phone2IsSet;
}
void SavedAddressResource::unsetPhone2()
{
    m_Phone2IsSet = false;
}
utility::string_t SavedAddressResource::getPostalCode() const
{
    return m_Postal_code;
}
void SavedAddressResource::setPostalCode(utility::string_t value)
{
    m_Postal_code = value;
    m_Postal_codeIsSet = true;
}
bool SavedAddressResource::postal_codeIsSet() const
{
    return m_Postal_codeIsSet;
}
void SavedAddressResource::unsetPostal_code()
{
    m_Postal_codeIsSet = false;
}
utility::string_t SavedAddressResource::getStateCode() const
{
    return m_State_code;
}
void SavedAddressResource::setStateCode(utility::string_t value)
{
    m_State_code = value;
    m_State_codeIsSet = true;
}
bool SavedAddressResource::state_codeIsSet() const
{
    return m_State_codeIsSet;
}
void SavedAddressResource::unsetState_code()
{
    m_State_codeIsSet = false;
}

}
}
}
}

