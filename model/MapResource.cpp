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



#include "MapResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

MapResource::MapResource()
{
    m_mapIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

MapResource::~MapResource()
{
}

void MapResource::validate()
{
    // TODO: implement validation
}

web::json::value MapResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_map )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("map")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void MapResource::fromJson(web::json::value& val)
{
    {
        m_map.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("map")))
        {
        for( auto& item : val[U("map")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_map.insert(std::pair<utility::string_t,std::shared_ptr<ExpressionResource>>( key, std::shared_ptr<ExpressionResource>(nullptr) ));
            }
            else
            {
                std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
                newItem->fromJson(item[U("value")]);
                m_map.insert(std::pair<utility::string_t,std::shared_ptr<ExpressionResource>>( key, newItem ));
            }
        }
        }
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void MapResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_map )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("map"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void MapResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_map.clear();
        if(multipart->hasContent(U("map")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("map"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_map.insert(std::pair<utility::string_t,std::shared_ptr<ExpressionResource>>( key, std::shared_ptr<ExpressionResource>(nullptr) ));
            }
            else
            {
                std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
                newItem->fromJson(item[U("value")]);
                m_map.insert(std::pair<utility::string_t,std::shared_ptr<ExpressionResource>>( key, newItem ));
            }
        }
        }
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

std::map<utility::string_t, std::shared_ptr<ExpressionResource>>& MapResource::getMap()
{
    return m_map;
}

void MapResource::setMap(std::map<utility::string_t, std::shared_ptr<ExpressionResource>> value)
{
    m_map = value;
    m_mapIsSet = true;
}
bool MapResource::mapIsSet() const
{
    return m_mapIsSet;
}

void MapResource::unsetmap()
{
    m_mapIsSet = false;
}

utility::string_t MapResource::getType() const
{
    return m_Type;
}


void MapResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool MapResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void MapResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

