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



#include "UserActionLog.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UserActionLog::UserActionLog()
{
    m_Action_description = U("");
    m_Action_name = U("");
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_DetailsIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Request_id = U("");
    m_Request_idIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
}

UserActionLog::~UserActionLog()
{
}

void UserActionLog::validate()
{
    // TODO: implement validation
}

web::json::value UserActionLog::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("action_description")] = ModelBase::toJson(m_Action_description);
    val[U("action_name")] = ModelBase::toJson(m_Action_name);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Details )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("details")] = web::json::value::array(jsonArray);
        }
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Request_idIsSet)
    {
        val[U("request_id")] = ModelBase::toJson(m_Request_id);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }

    return val;
}

void UserActionLog::fromJson(web::json::value& val)
{
    setActionDescription(ModelBase::stringFromJson(val[U("action_description")]));
    setActionName(ModelBase::stringFromJson(val[U("action_name")]));
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    {
        m_Details.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("details")))
        {
        for( auto& item : val[U("details")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            m_Details.insert(std::pair<utility::string_t,utility::string_t>( key, ModelBase::stringFromJson(item[U("value")])));
        }
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("request_id")))
    {
        setRequestId(ModelBase::stringFromJson(val[U("request_id")]));
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
}

void UserActionLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("action_description"), m_Action_description));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("action_name"), m_Action_name));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Details )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("details"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_Request_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("request_id"), m_Request_id));
        
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
}

void UserActionLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setActionDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("action_description"))));
    setActionName(ModelBase::stringFromHttpContent(multipart->getContent(U("action_name"))));
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    {
        m_Details.clear();
        if(multipart->hasContent(U("details")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("details"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            m_Details.insert(std::pair<utility::string_t,utility::string_t>( key, ModelBase::stringFromJson(item[U("value")])));
        }
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("request_id")))
    {
        setRequestId(ModelBase::stringFromHttpContent(multipart->getContent(U("request_id"))));
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
}

utility::string_t UserActionLog::getActionDescription() const
{
    return m_Action_description;
}


void UserActionLog::setActionDescription(utility::string_t value)
{
    m_Action_description = value;
    
}
utility::string_t UserActionLog::getActionName() const
{
    return m_Action_name;
}


void UserActionLog::setActionName(utility::string_t value)
{
    m_Action_name = value;
    
}
int64_t UserActionLog::getCreatedDate() const
{
    return m_Created_date;
}


void UserActionLog::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool UserActionLog::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void UserActionLog::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

std::map<utility::string_t, utility::string_t>& UserActionLog::getDetails()
{
    return m_Details;
}

void UserActionLog::setDetails(std::map<utility::string_t, utility::string_t> value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool UserActionLog::detailsIsSet() const
{
    return m_DetailsIsSet;
}

void UserActionLog::unsetDetails()
{
    m_DetailsIsSet = false;
}

utility::string_t UserActionLog::getId() const
{
    return m_Id;
}


void UserActionLog::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool UserActionLog::idIsSet() const
{
    return m_IdIsSet;
}

void UserActionLog::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t UserActionLog::getRequestId() const
{
    return m_Request_id;
}


void UserActionLog::setRequestId(utility::string_t value)
{
    m_Request_id = value;
    m_Request_idIsSet = true;
}
bool UserActionLog::requestIdIsSet() const
{
    return m_Request_idIsSet;
}

void UserActionLog::unsetRequest_id()
{
    m_Request_idIsSet = false;
}

int32_t UserActionLog::getUserId() const
{
    return m_User_id;
}


void UserActionLog::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool UserActionLog::userIdIsSet() const
{
    return m_User_idIsSet;
}

void UserActionLog::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

