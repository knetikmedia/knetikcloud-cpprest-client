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



#include "RewardCurrencyResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

RewardCurrencyResource::RewardCurrencyResource()
{
    m_Currency_code = U("");
    m_Currency_name = U("");
    m_Currency_nameIsSet = false;
    m_Max_rank = 0;
    m_Min_rank = 0;
    m_Percent = false;
    m_Value = 0.0;
}

RewardCurrencyResource::~RewardCurrencyResource()
{
}

void RewardCurrencyResource::validate()
{
    // TODO: implement validation
}

web::json::value RewardCurrencyResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    if(m_Currency_nameIsSet)
    {
        val[U("currency_name")] = ModelBase::toJson(m_Currency_name);
    }
    val[U("max_rank")] = ModelBase::toJson(m_Max_rank);
    val[U("min_rank")] = ModelBase::toJson(m_Min_rank);
    val[U("percent")] = ModelBase::toJson(m_Percent);
    val[U("value")] = ModelBase::toJson(m_Value);

    return val;
}

void RewardCurrencyResource::fromJson(web::json::value& val)
{
    setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
    if(val.has_field(U("currency_name")))
    {
        setCurrencyName(ModelBase::stringFromJson(val[U("currency_name")]));
    }
    setMaxRank(ModelBase::int32_tFromJson(val[U("max_rank")]));
    setMinRank(ModelBase::int32_tFromJson(val[U("min_rank")]));
    setPercent(ModelBase::boolFromJson(val[U("percent")]));
    setValue(ModelBase::doubleFromJson(val[U("value")]));
}

void RewardCurrencyResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
    if(m_Currency_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_name"), m_Currency_name));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("max_rank"), m_Max_rank));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("min_rank"), m_Min_rank));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("percent"), m_Percent));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
}

void RewardCurrencyResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
    if(multipart->hasContent(U("currency_name")))
    {
        setCurrencyName(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_name"))));
    }
    setMaxRank(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_rank"))));
    setMinRank(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_rank"))));
    setPercent(ModelBase::boolFromHttpContent(multipart->getContent(U("percent"))));
    setValue(ModelBase::doubleFromHttpContent(multipart->getContent(U("value"))));
}

utility::string_t RewardCurrencyResource::getCurrencyCode() const
{
    return m_Currency_code;
}


void RewardCurrencyResource::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    
}
utility::string_t RewardCurrencyResource::getCurrencyName() const
{
    return m_Currency_name;
}


void RewardCurrencyResource::setCurrencyName(utility::string_t value)
{
    m_Currency_name = value;
    m_Currency_nameIsSet = true;
}
bool RewardCurrencyResource::currencyNameIsSet() const
{
    return m_Currency_nameIsSet;
}

void RewardCurrencyResource::unsetCurrency_name()
{
    m_Currency_nameIsSet = false;
}

int32_t RewardCurrencyResource::getMaxRank() const
{
    return m_Max_rank;
}


void RewardCurrencyResource::setMaxRank(int32_t value)
{
    m_Max_rank = value;
    
}
int32_t RewardCurrencyResource::getMinRank() const
{
    return m_Min_rank;
}


void RewardCurrencyResource::setMinRank(int32_t value)
{
    m_Min_rank = value;
    
}
bool RewardCurrencyResource::getPercent() const
{
    return m_Percent;
}


void RewardCurrencyResource::setPercent(bool value)
{
    m_Percent = value;
    
}
double RewardCurrencyResource::getValue() const
{
    return m_Value;
}


void RewardCurrencyResource::setValue(double value)
{
    m_Value = value;
    
}
}
}
}
}

