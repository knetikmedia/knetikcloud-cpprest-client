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

/*
 * MessagingApi.h
 *
 * 
 */

#ifndef MessagingApi_H_
#define MessagingApi_H_


#include "ApiClient.h"

#include "RawEmailResource.h"
#include "RawSMSResource.h"
#include "Result.h"
#include "TemplateEmailResource.h"
#include "TemplateSMSResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  MessagingApi
{
public:
    MessagingApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~MessagingApi();
    /// <summary>
    /// Send a raw email to one or more users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="rawEmailResource">The new raw email to be sent (optional)</param>
    pplx::task<void> sendRawEmail(std::shared_ptr<RawEmailResource> rawEmailResource);
    /// <summary>
    /// Send a raw SMS
    /// </summary>
    /// <remarks>
    /// Sends a raw SMS text message to one or more users. User&#39;s without registered mobile numbers will be skipped.
    /// </remarks>
    /// <param name="rawSMSResource">The new raw SMS to be sent (optional)</param>
    pplx::task<void> sendRawSMS(std::shared_ptr<RawSMSResource> rawSMSResource);
    /// <summary>
    /// Send a templated email to one or more users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="messageResource">The new template email to be sent (optional)</param>
    pplx::task<void> sendTemplatedEmail(std::shared_ptr<TemplateEmailResource> messageResource);
    /// <summary>
    /// Send a new templated SMS
    /// </summary>
    /// <remarks>
    /// Sends a templated SMS text message to one or more users. User&#39;s without registered mobile numbers will be skipped.
    /// </remarks>
    /// <param name="templateSMSResource">The new template SMS to be sent (optional)</param>
    pplx::task<void> sendTemplatedSMS(std::shared_ptr<TemplateSMSResource> templateSMSResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* MessagingApi_H_ */

