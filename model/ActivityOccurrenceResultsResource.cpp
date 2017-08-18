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



#include "ActivityOccurrenceResultsResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityOccurrenceResultsResource::ActivityOccurrenceResultsResource()
{
}

ActivityOccurrenceResultsResource::~ActivityOccurrenceResultsResource()
{
}

void ActivityOccurrenceResultsResource::validate()
{
    // TODO: implement validation
}

web::json::value ActivityOccurrenceResultsResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Users )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("users")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ActivityOccurrenceResultsResource::fromJson(web::json::value& val)
{
    {
        m_Users.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("users")].as_array() )
        {
            if(item.is_null())
            {
                m_Users.push_back( std::shared_ptr<UserActivityResultsResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<UserActivityResultsResource> newItem(new UserActivityResultsResource());
                newItem->fromJson(item);
                m_Users.push_back( newItem );
            }
        }
    }
}

void ActivityOccurrenceResultsResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Users )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("users"), web::json::value::array(jsonArray), U("application/json")));
            }
}

void ActivityOccurrenceResultsResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Users.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("users"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Users.push_back( std::shared_ptr<UserActivityResultsResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<UserActivityResultsResource> newItem(new UserActivityResultsResource());
                newItem->fromJson(item);
                m_Users.push_back( newItem );
            }
        }
    }
}

std::vector<std::shared_ptr<UserActivityResultsResource>>& ActivityOccurrenceResultsResource::getUsers()
{
    return m_Users;
}

void ActivityOccurrenceResultsResource::setUsers(std::vector<std::shared_ptr<UserActivityResultsResource>> value)
{
    m_Users = value;
    
}
}
}
}
}
