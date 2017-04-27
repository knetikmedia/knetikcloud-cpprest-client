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



#include "BreRuleLog.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BreRuleLog::BreRuleLog()
{
    m_Ran = false;
    m_RanIsSet = false;
    m_Reason = U("");
    m_ReasonIsSet = false;
    m_Rule_end_date = 0;
    m_Rule_end_dateIsSet = false;
    m_Rule_id = U("");
    m_Rule_idIsSet = false;
    m_Rule_name = U("");
    m_Rule_nameIsSet = false;
    m_Rule_start_date = 0;
    m_Rule_start_dateIsSet = false;
    
}

BreRuleLog::~BreRuleLog()
{
}

void BreRuleLog::validate()
{
    // TODO: implement validation
}

web::json::value BreRuleLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_RanIsSet)
    {
        val[U("ran")] = ModelBase::toJson(m_Ran);
    }
    if(m_ReasonIsSet)
    {
        val[U("reason")] = ModelBase::toJson(m_Reason);
    }
    if(m_Rule_end_dateIsSet)
    {
        val[U("rule_end_date")] = ModelBase::toJson(m_Rule_end_date);
    }
    if(m_Rule_idIsSet)
    {
        val[U("rule_id")] = ModelBase::toJson(m_Rule_id);
    }
    if(m_Rule_nameIsSet)
    {
        val[U("rule_name")] = ModelBase::toJson(m_Rule_name);
    }
    if(m_Rule_start_dateIsSet)
    {
        val[U("rule_start_date")] = ModelBase::toJson(m_Rule_start_date);
    }
    

    return val;
}

void BreRuleLog::fromJson(web::json::value& val)
{
    if(val.has_field(U("ran")))
    {
        setRan(ModelBase::boolFromJson(val[U("ran")]));
    }
    if(val.has_field(U("reason")))
    {
        setReason(ModelBase::stringFromJson(val[U("reason")]));
        
    }
    if(val.has_field(U("rule_end_date")))
    {
        setRuleEndDate(ModelBase::int64_tFromJson(val[U("rule_end_date")]));
    }
    if(val.has_field(U("rule_id")))
    {
        setRuleId(ModelBase::stringFromJson(val[U("rule_id")]));
        
    }
    if(val.has_field(U("rule_name")))
    {
        setRuleName(ModelBase::stringFromJson(val[U("rule_name")]));
        
    }
    if(val.has_field(U("rule_start_date")))
    {
        setRuleStartDate(ModelBase::int64_tFromJson(val[U("rule_start_date")]));
    }
    
}

void BreRuleLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_RanIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ran"), m_Ran));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("reason"), m_Reason));
        
    }
    if(m_Rule_end_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("rule_end_date"), m_Rule_end_date));
    }
    if(m_Rule_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("rule_id"), m_Rule_id));
        
    }
    if(m_Rule_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("rule_name"), m_Rule_name));
        
    }
    if(m_Rule_start_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("rule_start_date"), m_Rule_start_date));
    }
    
}

void BreRuleLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("ran")))
    {
        setRan(ModelBase::boolFromHttpContent(multipart->getContent(U("ran"))));
    }
    if(multipart->hasContent(U("reason")))
    {
        setReason(ModelBase::stringFromHttpContent(multipart->getContent(U("reason"))));
        
    }
    if(multipart->hasContent(U("rule_end_date")))
    {
        setRuleEndDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("rule_end_date"))));
    }
    if(multipart->hasContent(U("rule_id")))
    {
        setRuleId(ModelBase::stringFromHttpContent(multipart->getContent(U("rule_id"))));
        
    }
    if(multipart->hasContent(U("rule_name")))
    {
        setRuleName(ModelBase::stringFromHttpContent(multipart->getContent(U("rule_name"))));
        
    }
    if(multipart->hasContent(U("rule_start_date")))
    {
        setRuleStartDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("rule_start_date"))));
    }
    
}


bool BreRuleLog::getRan() const
{
    return m_Ran;
}
void BreRuleLog::setRan(bool value)
{
    m_Ran = value;
    m_RanIsSet = true;
}
bool BreRuleLog::ranIsSet() const
{
    return m_RanIsSet;
}
void BreRuleLog::unsetRan()
{
    m_RanIsSet = false;
}
utility::string_t BreRuleLog::getReason() const
{
    return m_Reason;
}
void BreRuleLog::setReason(utility::string_t value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}
bool BreRuleLog::reasonIsSet() const
{
    return m_ReasonIsSet;
}
void BreRuleLog::unsetReason()
{
    m_ReasonIsSet = false;
}
int64_t BreRuleLog::getRuleEndDate() const
{
    return m_Rule_end_date;
}
void BreRuleLog::setRuleEndDate(int64_t value)
{
    m_Rule_end_date = value;
    m_Rule_end_dateIsSet = true;
}
bool BreRuleLog::rule_end_dateIsSet() const
{
    return m_Rule_end_dateIsSet;
}
void BreRuleLog::unsetRule_end_date()
{
    m_Rule_end_dateIsSet = false;
}
utility::string_t BreRuleLog::getRuleId() const
{
    return m_Rule_id;
}
void BreRuleLog::setRuleId(utility::string_t value)
{
    m_Rule_id = value;
    m_Rule_idIsSet = true;
}
bool BreRuleLog::rule_idIsSet() const
{
    return m_Rule_idIsSet;
}
void BreRuleLog::unsetRule_id()
{
    m_Rule_idIsSet = false;
}
utility::string_t BreRuleLog::getRuleName() const
{
    return m_Rule_name;
}
void BreRuleLog::setRuleName(utility::string_t value)
{
    m_Rule_name = value;
    m_Rule_nameIsSet = true;
}
bool BreRuleLog::rule_nameIsSet() const
{
    return m_Rule_nameIsSet;
}
void BreRuleLog::unsetRule_name()
{
    m_Rule_nameIsSet = false;
}
int64_t BreRuleLog::getRuleStartDate() const
{
    return m_Rule_start_date;
}
void BreRuleLog::setRuleStartDate(int64_t value)
{
    m_Rule_start_date = value;
    m_Rule_start_dateIsSet = true;
}
bool BreRuleLog::rule_start_dateIsSet() const
{
    return m_Rule_start_dateIsSet;
}
void BreRuleLog::unsetRule_start_date()
{
    m_Rule_start_dateIsSet = false;
}

}
}
}
}

