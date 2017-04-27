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



#include "PaymentMethodTypeResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PaymentMethodTypeResource::PaymentMethodTypeResource()
{
    m_Id = 0;
    m_Name = U("");
    
}

PaymentMethodTypeResource::~PaymentMethodTypeResource()
{
}

void PaymentMethodTypeResource::validate()
{
    // TODO: implement validation
}

web::json::value PaymentMethodTypeResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("id")] = ModelBase::toJson(m_Id);
    val[U("name")] = ModelBase::toJson(m_Name);
    

    return val;
}

void PaymentMethodTypeResource::fromJson(web::json::value& val)
{
    setId(ModelBase::int32_tFromJson(val[U("id")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    
}

void PaymentMethodTypeResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    
}

void PaymentMethodTypeResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    
}


int32_t PaymentMethodTypeResource::getId() const
{
    return m_Id;
}
void PaymentMethodTypeResource::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t PaymentMethodTypeResource::getName() const
{
    return m_Name;
}
void PaymentMethodTypeResource::setName(utility::string_t value)
{
    m_Name = value;
    
}

}
}
}
}

