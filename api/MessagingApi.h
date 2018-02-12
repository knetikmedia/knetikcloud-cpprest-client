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
 * MessagingApi.h
 *
 * 
 */

#ifndef MessagingApi_H_
#define MessagingApi_H_


#include "ApiClient.h"

#include "MessageResource.h"
#include "MessageTemplateBulkRequest.h"
#include "MessageTemplateResource.h"
#include "PageResource«MessageTemplateResource».h"
#include "RawEmailResource.h"
#include "RawPushResource.h"
#include "RawSMSResource.h"
#include "Result.h"
#include "TemplateEmailResource.h"
#include "TemplatePushResource.h"
#include "TemplateSMSResource.h"
#include "WebsocketMessageResource.h"
#include <cpprest/details/basic_types.h>

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
    /// Compile a message template
    /// </summary>
    /// <remarks>
    /// Processes a set of input data against the template and returnes the compiled result. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="request">request (optional)</param>
    pplx::task<std::map<utility::string_t, utility::string_t>> compileMessageTemplate(std::shared_ptr<MessageTemplateBulkRequest> request);
    /// <summary>
    /// Create a message template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="messageTemplate">The new template email to be sent (optional)</param>
    pplx::task<std::shared_ptr<MessageTemplateResource>> createMessageTemplate(std::shared_ptr<MessageTemplateResource> messageTemplate);
    /// <summary>
    /// Delete an existing message template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ARTICLES_ADMIN
    /// </remarks>
    /// <param name="id">The message_template id</param>
    pplx::task<void> deleteMessageTemplate(utility::string_t id);
    /// <summary>
    /// Get a single message template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ARTICLES_ADMIN
    /// </remarks>
    /// <param name="id">The message_template id</param>
    pplx::task<std::shared_ptr<MessageTemplateResource>> getMessageTemplate(utility::string_t id);
    /// <summary>
    /// List and search message templates
    /// </summary>
    /// <remarks>
    /// Get a list of message templates with optional filtering. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ARTICLES_ADMIN
    /// </remarks>
    /// <param name="filterTagset">Filter for message templates with at least one of a specified set of tags (separated by comma) (optional)</param>/// <param name="filterTagIntersection">Filter for message templates with all of a specified set of tags (separated by comma) (optional)</param>/// <param name="filterTagExclusion">Filter for message templates with none of a specified set of tags (separated by comma) (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«MessageTemplateResource»>> getMessageTemplates(utility::string_t filterTagset, utility::string_t filterTagIntersection, utility::string_t filterTagExclusion, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Send a message
    /// </summary>
    /// <remarks>
    /// Sends a message with one or more formats to one or more users. Fill in any message formats desired (email, sms, websockets) and each user will recieve all valid formats. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="messageResource">The message to be sent (optional)</param>
    pplx::task<void> sendMessage1(std::shared_ptr<MessageResource> messageResource);
    /// <summary>
    /// Send a raw email to one or more users
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="rawEmailResource">The new raw email to be sent (optional)</param>
    pplx::task<void> sendRawEmail(std::shared_ptr<RawEmailResource> rawEmailResource);
    /// <summary>
    /// Send a raw push notification
    /// </summary>
    /// <remarks>
    /// Sends a raw push notification message to one or more users. User&#39;s without registered mobile device for the application will be skipped. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="rawPushResource">The new raw push notification to be sent (optional)</param>
    pplx::task<void> sendRawPush(std::shared_ptr<RawPushResource> rawPushResource);
    /// <summary>
    /// Send a raw SMS
    /// </summary>
    /// <remarks>
    /// Sends a raw SMS text message to one or more users. User&#39;s without registered mobile numbers will be skipped. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="rawSMSResource">The new raw SMS to be sent (optional)</param>
    pplx::task<void> sendRawSMS(std::shared_ptr<RawSMSResource> rawSMSResource);
    /// <summary>
    /// Send a templated email to one or more users
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="messageResource">The new template email to be sent (optional)</param>
    pplx::task<void> sendTemplatedEmail(std::shared_ptr<TemplateEmailResource> messageResource);
    /// <summary>
    /// Send a templated push notification
    /// </summary>
    /// <remarks>
    /// Sends a templated push notification message to one or more users. User&#39;s without registered mobile device for the application will be skipped. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="templatePushResource">The new templated push notification to be sent (optional)</param>
    pplx::task<void> sendTemplatedPush(std::shared_ptr<TemplatePushResource> templatePushResource);
    /// <summary>
    /// Send a new templated SMS
    /// </summary>
    /// <remarks>
    /// Sends a templated SMS text message to one or more users. User&#39;s without registered mobile numbers will be skipped. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="templateSMSResource">The new template SMS to be sent (optional)</param>
    pplx::task<void> sendTemplatedSMS(std::shared_ptr<TemplateSMSResource> templateSMSResource);
    /// <summary>
    /// Send a websocket message
    /// </summary>
    /// <remarks>
    /// Sends a websocket message to one or more users. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; MESSAGING_ADMIN
    /// </remarks>
    /// <param name="websocketResource">The new websocket message to be sent (optional)</param>
    pplx::task<void> sendWebsocket(std::shared_ptr<WebsocketMessageResource> websocketResource);
    /// <summary>
    /// Update an existing message template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ARTICLES_ADMIN
    /// </remarks>
    /// <param name="id">The message_template id</param>/// <param name="messageTemplateResource">The message template (optional)</param>
    pplx::task<std::shared_ptr<MessageTemplateResource>> updateMessageTemplate(utility::string_t id, std::shared_ptr<MessageTemplateResource> messageTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* MessagingApi_H_ */

