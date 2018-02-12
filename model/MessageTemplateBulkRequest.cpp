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



#include "MessageTemplateBulkRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

MessageTemplateBulkRequest::MessageTemplateBulkRequest()
{
}

MessageTemplateBulkRequest::~MessageTemplateBulkRequest()
{
}

void MessageTemplateBulkRequest::validate()
{
    // TODO: implement validation
}

web::json::value MessageTemplateBulkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("data")] = ModelBase::toJson(m_Data);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("ids")] = web::json::value::array(jsonArray);
    }

    return val;
}

void MessageTemplateBulkRequest::fromJson(web::json::value& val)
{
    std::shared_ptr<Object> newData(nullptr);
    newData->fromJson(val[U("data")]);
    setData( newData );
    {
        m_Ids.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("ids")].as_array() )
        {
            m_Ids.push_back(ModelBase::stringFromJson(item));
        }
    }
}

void MessageTemplateBulkRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    m_Data->toMultipart(multipart, U("data."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ids"), web::json::value::array(jsonArray), U("application/json")));
            }
}

void MessageTemplateBulkRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    std::shared_ptr<Object> newData(nullptr);
    newData->fromMultiPart(multipart, U("data."));
    setData( newData );
    {
        m_Ids.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("ids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Ids.push_back(ModelBase::stringFromJson(item));
        }
    }
}

std::shared_ptr<Object> MessageTemplateBulkRequest::getData() const
{
    return m_Data;
}


void MessageTemplateBulkRequest::setData(std::shared_ptr<Object> value)
{
    m_Data = value;
    
}
std::vector<utility::string_t>& MessageTemplateBulkRequest::getIds()
{
    return m_Ids;
}

void MessageTemplateBulkRequest::setIds(std::vector<utility::string_t> value)
{
    m_Ids = value;
    
}
}
}
}
}

