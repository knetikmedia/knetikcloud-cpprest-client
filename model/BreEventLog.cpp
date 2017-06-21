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



#include "BreEventLog.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BreEventLog::BreEventLog()
{
    m_Customer = U("");
    m_CustomerIsSet = false;
    m_Event_id = U("");
    m_Event_idIsSet = false;
    m_Event_name = U("");
    m_Event_nameIsSet = false;
    m_Event_start_date = 0;
    m_Event_start_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_ParametersIsSet = false;
    m_RulesIsSet = false;
    
}

BreEventLog::~BreEventLog()
{
}

void BreEventLog::validate()
{
    // TODO: implement validation
}

web::json::value BreEventLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CustomerIsSet)
    {
        val[U("customer")] = ModelBase::toJson(m_Customer);
    }
    if(m_Event_idIsSet)
    {
        val[U("event_id")] = ModelBase::toJson(m_Event_id);
    }
    if(m_Event_nameIsSet)
    {
        val[U("event_name")] = ModelBase::toJson(m_Event_name);
    }
    if(m_Event_start_dateIsSet)
    {
        val[U("event_start_date")] = ModelBase::toJson(m_Event_start_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ParametersIsSet)
    {
        val[U("parameters")] = ModelBase::toJson(m_Parameters);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Rules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("rules")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void BreEventLog::fromJson(web::json::value& val)
{
    if(val.has_field(U("customer")))
    {
        setCustomer(ModelBase::stringFromJson(val[U("customer")]));
        
    }
    if(val.has_field(U("event_id")))
    {
        setEventId(ModelBase::stringFromJson(val[U("event_id")]));
        
    }
    if(val.has_field(U("event_name")))
    {
        setEventName(ModelBase::stringFromJson(val[U("event_name")]));
        
    }
    if(val.has_field(U("event_start_date")))
    {
        setEventStartDate(ModelBase::int64_tFromJson(val[U("event_start_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("parameters")))
    {
        if(!val[U("parameters")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("parameters")]);
            setParameters( newItem );
        }
        
    }
    {
        m_Rules.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("rules")))
        {
        for( auto& item : val[U("rules")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Rules.push_back( std::shared_ptr<BreRuleLog>(nullptr) );
            }
            else
            {
                std::shared_ptr<BreRuleLog> newItem(new BreRuleLog());
                newItem->fromJson(item);
                m_Rules.push_back( newItem );
            }
            
        }
        }
    }
    
}

void BreEventLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CustomerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("customer"), m_Customer));
        
    }
    if(m_Event_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("event_id"), m_Event_id));
        
    }
    if(m_Event_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("event_name"), m_Event_name));
        
    }
    if(m_Event_start_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("event_start_date"), m_Event_start_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_ParametersIsSet)
    {
        if (m_Parameters.get())
        {
            m_Parameters->toMultipart(multipart, U("parameters."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Rules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("rules"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void BreEventLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("customer")))
    {
        setCustomer(ModelBase::stringFromHttpContent(multipart->getContent(U("customer"))));
        
    }
    if(multipart->hasContent(U("event_id")))
    {
        setEventId(ModelBase::stringFromHttpContent(multipart->getContent(U("event_id"))));
        
    }
    if(multipart->hasContent(U("event_name")))
    {
        setEventName(ModelBase::stringFromHttpContent(multipart->getContent(U("event_name"))));
        
    }
    if(multipart->hasContent(U("event_start_date")))
    {
        setEventStartDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("event_start_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("parameters")))
    {
        if(multipart->hasContent(U("parameters")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("parameters."));
            setParameters( newItem );
        }
        
    }
    {
        m_Rules.clear();
        if(multipart->hasContent(U("rules")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("rules"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Rules.push_back( std::shared_ptr<BreRuleLog>(nullptr) );
            }
            else
            {
                std::shared_ptr<BreRuleLog> newItem(new BreRuleLog());
                newItem->fromJson(item);
                m_Rules.push_back( newItem );
            }
            
        }
        }
    }
    
}


utility::string_t BreEventLog::getCustomer() const
{
    return m_Customer;
}
void BreEventLog::setCustomer(utility::string_t value)
{
    m_Customer = value;
    m_CustomerIsSet = true;
}
bool BreEventLog::customerIsSet() const
{
    return m_CustomerIsSet;
}
void BreEventLog::unsetCustomer()
{
    m_CustomerIsSet = false;
}
utility::string_t BreEventLog::getEventId() const
{
    return m_Event_id;
}
void BreEventLog::setEventId(utility::string_t value)
{
    m_Event_id = value;
    m_Event_idIsSet = true;
}
bool BreEventLog::event_idIsSet() const
{
    return m_Event_idIsSet;
}
void BreEventLog::unsetEvent_id()
{
    m_Event_idIsSet = false;
}
utility::string_t BreEventLog::getEventName() const
{
    return m_Event_name;
}
void BreEventLog::setEventName(utility::string_t value)
{
    m_Event_name = value;
    m_Event_nameIsSet = true;
}
bool BreEventLog::event_nameIsSet() const
{
    return m_Event_nameIsSet;
}
void BreEventLog::unsetEvent_name()
{
    m_Event_nameIsSet = false;
}
int64_t BreEventLog::getEventStartDate() const
{
    return m_Event_start_date;
}
void BreEventLog::setEventStartDate(int64_t value)
{
    m_Event_start_date = value;
    m_Event_start_dateIsSet = true;
}
bool BreEventLog::event_start_dateIsSet() const
{
    return m_Event_start_dateIsSet;
}
void BreEventLog::unsetEvent_start_date()
{
    m_Event_start_dateIsSet = false;
}
utility::string_t BreEventLog::getId() const
{
    return m_Id;
}
void BreEventLog::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool BreEventLog::idIsSet() const
{
    return m_IdIsSet;
}
void BreEventLog::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<Object> BreEventLog::getParameters() const
{
    return m_Parameters;
}
void BreEventLog::setParameters(std::shared_ptr<Object> value)
{
    m_Parameters = value;
    m_ParametersIsSet = true;
}
bool BreEventLog::parametersIsSet() const
{
    return m_ParametersIsSet;
}
void BreEventLog::unsetParameters()
{
    m_ParametersIsSet = false;
}
std::vector<std::shared_ptr<BreRuleLog>>& BreEventLog::getRules()
{
    return m_Rules;
}
bool BreEventLog::rulesIsSet() const
{
    return m_RulesIsSet;
}
void BreEventLog::unsetRules()
{
    m_RulesIsSet = false;
}

}
}
}
}

