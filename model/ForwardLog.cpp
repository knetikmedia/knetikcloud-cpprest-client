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



#include "ForwardLog.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ForwardLog::ForwardLog()
{
    m_End_date = 0;
    m_End_dateIsSet = false;
    m_Error_msg = U("");
    m_Error_msgIsSet = false;
    m_Http_status_code = 0;
    m_Http_status_codeIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_PayloadIsSet = false;
    m_Response = U("");
    m_ResponseIsSet = false;
    m_Retry_count = 0;
    m_Retry_countIsSet = false;
    m_Start_date = 0;
    m_Start_dateIsSet = false;
    m_Url = U("");
    m_UrlIsSet = false;
    
}

ForwardLog::~ForwardLog()
{
}

void ForwardLog::validate()
{
    // TODO: implement validation
}

web::json::value ForwardLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_End_dateIsSet)
    {
        val[U("end_date")] = ModelBase::toJson(m_End_date);
    }
    if(m_Error_msgIsSet)
    {
        val[U("error_msg")] = ModelBase::toJson(m_Error_msg);
    }
    if(m_Http_status_codeIsSet)
    {
        val[U("http_status_code")] = ModelBase::toJson(m_Http_status_code);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_PayloadIsSet)
    {
        val[U("payload")] = ModelBase::toJson(m_Payload);
    }
    if(m_ResponseIsSet)
    {
        val[U("response")] = ModelBase::toJson(m_Response);
    }
    if(m_Retry_countIsSet)
    {
        val[U("retry_count")] = ModelBase::toJson(m_Retry_count);
    }
    if(m_Start_dateIsSet)
    {
        val[U("start_date")] = ModelBase::toJson(m_Start_date);
    }
    if(m_UrlIsSet)
    {
        val[U("url")] = ModelBase::toJson(m_Url);
    }
    

    return val;
}

void ForwardLog::fromJson(web::json::value& val)
{
    if(val.has_field(U("end_date")))
    {
        setEndDate(ModelBase::int64_tFromJson(val[U("end_date")]));
    }
    if(val.has_field(U("error_msg")))
    {
        setErrorMsg(ModelBase::stringFromJson(val[U("error_msg")]));
        
    }
    if(val.has_field(U("http_status_code")))
    {
        setHttpStatusCode(ModelBase::int32_tFromJson(val[U("http_status_code")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("payload")))
    {
        if(!val[U("payload")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("payload")]);
            setPayload( newItem );
        }
        
    }
    if(val.has_field(U("response")))
    {
        setResponse(ModelBase::stringFromJson(val[U("response")]));
        
    }
    if(val.has_field(U("retry_count")))
    {
        setRetryCount(ModelBase::int32_tFromJson(val[U("retry_count")]));
    }
    if(val.has_field(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromJson(val[U("start_date")]));
    }
    if(val.has_field(U("url")))
    {
        setUrl(ModelBase::stringFromJson(val[U("url")]));
        
    }
    
}

void ForwardLog::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_End_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("end_date"), m_End_date));
    }
    if(m_Error_msgIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("error_msg"), m_Error_msg));
        
    }
    if(m_Http_status_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("http_status_code"), m_Http_status_code));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_PayloadIsSet)
    {
        if (m_Payload.get())
        {
            m_Payload->toMultipart(multipart, U("payload."));
        }
        
    }
    if(m_ResponseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("response"), m_Response));
        
    }
    if(m_Retry_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("retry_count"), m_Retry_count));
    }
    if(m_Start_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("start_date"), m_Start_date));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
    
}

void ForwardLog::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("end_date")))
    {
        setEndDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("end_date"))));
    }
    if(multipart->hasContent(U("error_msg")))
    {
        setErrorMsg(ModelBase::stringFromHttpContent(multipart->getContent(U("error_msg"))));
        
    }
    if(multipart->hasContent(U("http_status_code")))
    {
        setHttpStatusCode(ModelBase::int32_tFromHttpContent(multipart->getContent(U("http_status_code"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("payload")))
    {
        if(multipart->hasContent(U("payload")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("payload."));
            setPayload( newItem );
        }
        
    }
    if(multipart->hasContent(U("response")))
    {
        setResponse(ModelBase::stringFromHttpContent(multipart->getContent(U("response"))));
        
    }
    if(multipart->hasContent(U("retry_count")))
    {
        setRetryCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("retry_count"))));
    }
    if(multipart->hasContent(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("start_date"))));
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
        
    }
    
}


int64_t ForwardLog::getEndDate() const
{
    return m_End_date;
}
void ForwardLog::setEndDate(int64_t value)
{
    m_End_date = value;
    m_End_dateIsSet = true;
}
bool ForwardLog::end_dateIsSet() const
{
    return m_End_dateIsSet;
}
void ForwardLog::unsetEnd_date()
{
    m_End_dateIsSet = false;
}
utility::string_t ForwardLog::getErrorMsg() const
{
    return m_Error_msg;
}
void ForwardLog::setErrorMsg(utility::string_t value)
{
    m_Error_msg = value;
    m_Error_msgIsSet = true;
}
bool ForwardLog::error_msgIsSet() const
{
    return m_Error_msgIsSet;
}
void ForwardLog::unsetError_msg()
{
    m_Error_msgIsSet = false;
}
int32_t ForwardLog::getHttpStatusCode() const
{
    return m_Http_status_code;
}
void ForwardLog::setHttpStatusCode(int32_t value)
{
    m_Http_status_code = value;
    m_Http_status_codeIsSet = true;
}
bool ForwardLog::http_status_codeIsSet() const
{
    return m_Http_status_codeIsSet;
}
void ForwardLog::unsetHttp_status_code()
{
    m_Http_status_codeIsSet = false;
}
utility::string_t ForwardLog::getId() const
{
    return m_Id;
}
void ForwardLog::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ForwardLog::idIsSet() const
{
    return m_IdIsSet;
}
void ForwardLog::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<Object> ForwardLog::getPayload() const
{
    return m_Payload;
}
void ForwardLog::setPayload(std::shared_ptr<Object> value)
{
    m_Payload = value;
    m_PayloadIsSet = true;
}
bool ForwardLog::payloadIsSet() const
{
    return m_PayloadIsSet;
}
void ForwardLog::unsetPayload()
{
    m_PayloadIsSet = false;
}
utility::string_t ForwardLog::getResponse() const
{
    return m_Response;
}
void ForwardLog::setResponse(utility::string_t value)
{
    m_Response = value;
    m_ResponseIsSet = true;
}
bool ForwardLog::responseIsSet() const
{
    return m_ResponseIsSet;
}
void ForwardLog::unsetResponse()
{
    m_ResponseIsSet = false;
}
int32_t ForwardLog::getRetryCount() const
{
    return m_Retry_count;
}
void ForwardLog::setRetryCount(int32_t value)
{
    m_Retry_count = value;
    m_Retry_countIsSet = true;
}
bool ForwardLog::retry_countIsSet() const
{
    return m_Retry_countIsSet;
}
void ForwardLog::unsetRetry_count()
{
    m_Retry_countIsSet = false;
}
int64_t ForwardLog::getStartDate() const
{
    return m_Start_date;
}
void ForwardLog::setStartDate(int64_t value)
{
    m_Start_date = value;
    m_Start_dateIsSet = true;
}
bool ForwardLog::start_dateIsSet() const
{
    return m_Start_dateIsSet;
}
void ForwardLog::unsetStart_date()
{
    m_Start_dateIsSet = false;
}
utility::string_t ForwardLog::getUrl() const
{
    return m_Url;
}
void ForwardLog::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool ForwardLog::urlIsSet() const
{
    return m_UrlIsSet;
}
void ForwardLog::unsetUrl()
{
    m_UrlIsSet = false;
}

}
}
}
}

