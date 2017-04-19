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



#include "ActivityOccurrenceCreationFailure.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityOccurrenceCreationFailure::ActivityOccurrenceCreationFailure()
{
    m_User_resultsIsSet = false;
    
}

ActivityOccurrenceCreationFailure::~ActivityOccurrenceCreationFailure()
{
}

void ActivityOccurrenceCreationFailure::validate()
{
    // TODO: implement validation
}

web::json::value ActivityOccurrenceCreationFailure::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_User_results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("user_results")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void ActivityOccurrenceCreationFailure::fromJson(web::json::value& val)
{
    {
        m_User_results.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("user_results")))
        {
        for( auto& item : val[U("user_results")].as_array() )
        {
            
            if(item.is_null())
            {
                m_User_results.push_back( std::shared_ptr<ActivityOccurrenceJoinResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ActivityOccurrenceJoinResult> newItem(new ActivityOccurrenceJoinResult());
                newItem->fromJson(item);
                m_User_results.push_back( newItem );
            }
            
        }
        }
    }
    
}

void ActivityOccurrenceCreationFailure::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_User_results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("user_results"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void ActivityOccurrenceCreationFailure::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_User_results.clear();
        if(multipart->hasContent(U("user_results")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("user_results"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_User_results.push_back( std::shared_ptr<ActivityOccurrenceJoinResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ActivityOccurrenceJoinResult> newItem(new ActivityOccurrenceJoinResult());
                newItem->fromJson(item);
                m_User_results.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::vector<std::shared_ptr<ActivityOccurrenceJoinResult>>& ActivityOccurrenceCreationFailure::getUserResults()
{
    return m_User_results;
}
bool ActivityOccurrenceCreationFailure::user_resultsIsSet() const
{
    return m_User_resultsIsSet;
}
void ActivityOccurrenceCreationFailure::unsetUser_results()
{
    m_User_resultsIsSet = false;
}

}
}
}
}

