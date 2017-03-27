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



#include "VariableTypeResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

VariableTypeResource::VariableTypeResource()
{
    m_Base = U("");
    m_Name = U("");
    
}

VariableTypeResource::~VariableTypeResource()
{
}

void VariableTypeResource::validate()
{
    // TODO: implement validation
}

web::json::value VariableTypeResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("base")] = ModelBase::toJson(m_Base);
    val[U("name")] = ModelBase::toJson(m_Name);
    

    return val;
}

void VariableTypeResource::fromJson(web::json::value& val)
{
    setBase(ModelBase::stringFromJson(val[U("base")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    
}

void VariableTypeResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("base"), m_Base));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    
}

void VariableTypeResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setBase(ModelBase::stringFromHttpContent(multipart->getContent(U("base"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    
}


utility::string_t VariableTypeResource::getBase() const
{
    return m_Base;
}
void VariableTypeResource::setBase(utility::string_t value)
{
    m_Base = value;
    
}
utility::string_t VariableTypeResource::getName() const
{
    return m_Name;
}
void VariableTypeResource::setName(utility::string_t value)
{
    m_Name = value;
    
}

}
}
}
}

