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

/*
 * ForwardLog.h
 *
 * 
 */

#ifndef ForwardLog_H_
#define ForwardLog_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ForwardLog
    : public ModelBase
{
public:
    ForwardLog();
    virtual ~ForwardLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ForwardLog members

    /// <summary>
    /// The end date of the forward log entry
    /// </summary>
    int64_t getEndDate() const;
    bool endDateIsSet() const;
    void unsetEnd_date();
    void setEndDate(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unsetError_msg();
    void setErrorMsg(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEventId() const;
    bool eventIdIsSet() const;
    void unsetEvent_id();
    void setEventId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHeaders() const;
    bool headersIsSet() const;
    void unsetHeaders();
    void setHeaders(utility::string_t value);
    /// <summary>
    /// The http status code the forward log entry
    /// </summary>
    int32_t getHttpStatusCode() const;
    bool httpStatusCodeIsSet() const;
    void unsetHttp_status_code();
    void setHttpStatusCode(int32_t value);
    /// <summary>
    /// The id of the forward log entry
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMethod() const;
    bool methodIsSet() const;
    void unsetMethod();
    void setMethod(utility::string_t value);
    /// <summary>
    /// The payload of the forward log entry
    /// </summary>
    std::shared_ptr<Object> getPayload() const;
    bool payloadIsSet() const;
    void unsetPayload();
    void setPayload(std::shared_ptr<Object> value);
    /// <summary>
    /// The response string of the forward log entry
    /// </summary>
    utility::string_t getResponse() const;
    bool responseIsSet() const;
    void unsetResponse();
    void setResponse(utility::string_t value);
    /// <summary>
    /// The retry count of the forward log entry
    /// </summary>
    int32_t getRetryCount() const;
    bool retryCountIsSet() const;
    void unsetRetry_count();
    void setRetryCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getRetryable() const;
    bool retryableIsSet() const;
    void unsetRetryable();
    void setRetryable(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetRule_id();
    void setRuleId(utility::string_t value);
    /// <summary>
    /// The start date of the forward log entry
    /// </summary>
    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetStart_date();
    void setStartDate(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();
    void setSuccess(bool value);
    /// <summary>
    /// The endpoint url of the forward log entry
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();
    void setUrl(utility::string_t value);

protected:
    int64_t m_End_date;
    bool m_End_dateIsSet;
    utility::string_t m_Error_msg;
    bool m_Error_msgIsSet;
    utility::string_t m_Event_id;
    bool m_Event_idIsSet;
    utility::string_t m_Headers;
    bool m_HeadersIsSet;
    int32_t m_Http_status_code;
    bool m_Http_status_codeIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Method;
    bool m_MethodIsSet;
    std::shared_ptr<Object> m_Payload;
    bool m_PayloadIsSet;
    utility::string_t m_Response;
    bool m_ResponseIsSet;
    int32_t m_Retry_count;
    bool m_Retry_countIsSet;
    bool m_Retryable;
    bool m_RetryableIsSet;
    utility::string_t m_Rule_id;
    bool m_Rule_idIsSet;
    int64_t m_Start_date;
    bool m_Start_dateIsSet;
    bool m_Success;
    bool m_SuccessIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
};

}
}
}
}

#endif /* ForwardLog_H_ */
