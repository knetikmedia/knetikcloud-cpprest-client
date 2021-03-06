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



#include "Schedule.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Schedule::Schedule()
{
    m_Duration = 0;
    m_Duration_unit = U("");
    m_Repeat = U("");
}

Schedule::~Schedule()
{
}

void Schedule::validate()
{
    // TODO: implement validation
}

web::json::value Schedule::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("duration")] = ModelBase::toJson(m_Duration);
    val[U("duration_unit")] = ModelBase::toJson(m_Duration_unit);
    val[U("repeat")] = ModelBase::toJson(m_Repeat);

    return val;
}

void Schedule::fromJson(web::json::value& val)
{
    setDuration(ModelBase::int32_tFromJson(val[U("duration")]));
    setDurationUnit(ModelBase::stringFromJson(val[U("duration_unit")]));
    setRepeat(ModelBase::stringFromJson(val[U("repeat")]));
}

void Schedule::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("duration"), m_Duration));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("duration_unit"), m_Duration_unit));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("repeat"), m_Repeat));
}

void Schedule::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setDuration(ModelBase::int32_tFromHttpContent(multipart->getContent(U("duration"))));
    setDurationUnit(ModelBase::stringFromHttpContent(multipart->getContent(U("duration_unit"))));
    setRepeat(ModelBase::stringFromHttpContent(multipart->getContent(U("repeat"))));
}

int32_t Schedule::getDuration() const
{
    return m_Duration;
}


void Schedule::setDuration(int32_t value)
{
    m_Duration = value;
    
}
utility::string_t Schedule::getDurationUnit() const
{
    return m_Duration_unit;
}


void Schedule::setDurationUnit(utility::string_t value)
{
    m_Duration_unit = value;
    
}
utility::string_t Schedule::getRepeat() const
{
    return m_Repeat;
}


void Schedule::setRepeat(utility::string_t value)
{
    m_Repeat = value;
    
}
}
}
}
}

