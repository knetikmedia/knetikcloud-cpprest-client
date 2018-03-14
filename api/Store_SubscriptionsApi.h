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
 * Store_SubscriptionsApi.h
 *
 * 
 */

#ifndef Store_SubscriptionsApi_H_
#define Store_SubscriptionsApi_H_


#include "ApiClient.h"

#include "PageResource«SubscriptionResource».h"
#include "PageResource«SubscriptionTemplateResource».h"
#include "Result.h"
#include "SubscriptionResource.h"
#include "SubscriptionTemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Store_SubscriptionsApi
{
public:
    Store_SubscriptionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Store_SubscriptionsApi();
    /// <summary>
    /// Creates a subscription item and associated plans
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="subscriptionResource">The subscription to be created (optional)</param>
    pplx::task<std::shared_ptr<SubscriptionResource>> createSubscription(std::shared_ptr<SubscriptionResource> subscriptionResource);
    /// <summary>
    /// Create a subscription template
    /// </summary>
    /// <remarks>
    /// Subscription Templates define a type of subscription and the properties they have. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="subscriptionTemplateResource">The new subscription template (optional)</param>
    pplx::task<std::shared_ptr<SubscriptionTemplateResource>> createSubscriptionTemplate(std::shared_ptr<SubscriptionTemplateResource> subscriptionTemplateResource);
    /// <summary>
    /// Delete a subscription plan
    /// </summary>
    /// <remarks>
    /// Must not be locked or a migration target. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="id">The id of the subscription</param>/// <param name="planId">The id of the plan</param>
    pplx::task<void> deleteSubscription(int32_t id, utility::string_t planId);
    /// <summary>
    /// Delete a subscription template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach (optional)</param>
    pplx::task<void> deleteSubscriptionTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Retrieve a single subscription item and associated plans
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="id">The id of the subscription</param>
    pplx::task<std::shared_ptr<SubscriptionResource>> getSubscription(int32_t id);
    /// <summary>
    /// Get a single subscription template
    /// </summary>
    /// <remarks>
    /// Subscription Templates define a type of subscription and the properties they have. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<SubscriptionTemplateResource>> getSubscriptionTemplate(utility::string_t id);
    /// <summary>
    /// List and search subscription templates
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN or SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«SubscriptionTemplateResource»>> getSubscriptionTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List available subscription items and associated plans
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«SubscriptionResource»>> getSubscriptions(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Processes subscriptions and charge dues
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; SUBSCRIPTIONS_ADMIN
    /// </remarks>
    
    pplx::task<void> processSubscriptions();
    /// <summary>
    /// Updates a subscription item and associated plans
    /// </summary>
    /// <remarks>
    /// Will not remove plans left out. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="id">The id of the subscription</param>/// <param name="subscriptionResource">The subscription resource object (optional)</param>
    pplx::task<void> updateSubscription(int32_t id, std::shared_ptr<SubscriptionResource> subscriptionResource);
    /// <summary>
    /// Update a subscription template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="subscriptionTemplateResource">The subscription template resource object (optional)</param>
    pplx::task<std::shared_ptr<SubscriptionTemplateResource>> updateSubscriptionTemplate(utility::string_t id, std::shared_ptr<SubscriptionTemplateResource> subscriptionTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Store_SubscriptionsApi_H_ */
