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



#include "PredicateResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PredicateResource::PredicateResource()
{
    m_Op = U("");
    m_Type = U("");
    m_TypeIsSet = false;
}

PredicateResource::~PredicateResource()
{
}

void PredicateResource::validate()
{
    // TODO: implement validation
}

web::json::value PredicateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Args )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("args")] = web::json::value::array(jsonArray);
    }
    val[U("op")] = ModelBase::toJson(m_Op);
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void PredicateResource::fromJson(web::json::value& val)
{
    {
        m_Args.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("args")].as_array() )
        {
            if(item.is_null())
            {
                m_Args.push_back( std::shared_ptr<ExpressionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
                newItem->fromJson(item);
                m_Args.push_back( newItem );
            }
        }
    }
    setOp(ModelBase::stringFromJson(val[U("op")]));
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void PredicateResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Args )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("args"), web::json::value::array(jsonArray), U("application/json")));
            }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("op"), m_Op));
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void PredicateResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Args.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("args"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Args.push_back( std::shared_ptr<ExpressionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
                newItem->fromJson(item);
                m_Args.push_back( newItem );
            }
        }
    }
    setOp(ModelBase::stringFromHttpContent(multipart->getContent(U("op"))));
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

std::vector<std::shared_ptr<ExpressionResource>>& PredicateResource::getArgs()
{
    return m_Args;
}

void PredicateResource::setArgs(std::vector<std::shared_ptr<ExpressionResource>> value)
{
    m_Args = value;
    
}
utility::string_t PredicateResource::getOp() const
{
    return m_Op;
}


void PredicateResource::setOp(utility::string_t value)
{
    m_Op = value;
    
}
utility::string_t PredicateResource::getType() const
{
    return m_Type;
}


void PredicateResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool PredicateResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void PredicateResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

