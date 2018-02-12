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
 * UsersSubscriptionsApi.h
 *
 * 
 */

#ifndef UsersSubscriptionsApi_H_
#define UsersSubscriptionsApi_H_


#include "ApiClient.h"

#include "IntWrapper.h"
#include "InventorySubscriptionResource.h"
#include "InvoiceResource.h"
#include "ReactivateSubscriptionRequest.h"
#include "Result.h"
#include "StringWrapper.h"
#include "SubscriptionPriceOverrideRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UsersSubscriptionsApi
{
public:
    UsersSubscriptionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersSubscriptionsApi();
    /// <summary>
    /// Get details about a user&#39;s subscription
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN or owner
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>
    pplx::task<std::shared_ptr<InventorySubscriptionResource>> getUserSubscriptionDetails(int32_t userId, int32_t inventoryId);
    /// <summary>
    /// Get details about a user&#39;s subscriptions
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN or owner
    /// </remarks>
    /// <param name="userId">The id of the user</param>
    pplx::task<std::vector<std::shared_ptr<InventorySubscriptionResource>>> getUsersSubscriptionDetails(int32_t userId);
    /// <summary>
    /// Reactivate a subscription and charge fee
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="reactivateSubscriptionRequest">The reactivate subscription request object inventory (optional)</param>
    pplx::task<std::shared_ptr<InvoiceResource>> reactivateUserSubscription(int32_t userId, int32_t inventoryId, std::shared_ptr<ReactivateSubscriptionRequest> reactivateSubscriptionRequest);
    /// <summary>
    /// Set a new date to bill a subscription on
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="billDate">The new bill date. Unix timestamp in seconds</param>
    pplx::task<void> setSubscriptionBillDate(int32_t userId, int32_t inventoryId, int64_t billDate);
    /// <summary>
    /// Set the payment method to use for a subscription
    /// </summary>
    /// <remarks>
    /// May send null to use floating default. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN or owner
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="paymentMethodId">The id of the payment method (optional)</param>
    pplx::task<void> setSubscriptionPaymentMethod(int32_t userId, int32_t inventoryId, std::shared_ptr<IntWrapper> paymentMethodId);
    /// <summary>
    /// Set the status of a subscription
    /// </summary>
    /// <remarks>
    /// Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN or owner
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="status">The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: (&#39;current&#39;, &#39;canceled&#39;, &#39;stopped&#39;, &#39;payment_failed&#39;, &#39;suspended&#39;)</param>
    pplx::task<void> setSubscriptionStatus(int32_t userId, int32_t inventoryId, std::shared_ptr<StringWrapper> status);
    /// <summary>
    /// Set a new subscription plan for a user
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="planId">The id of the new plan. Must be from the same subscription (optional)</param>
    pplx::task<void> setUserSubscriptionPlan(int32_t userId, int32_t inventoryId, std::shared_ptr<StringWrapper> planId);
    /// <summary>
    /// Set a new subscription price for a user
    /// </summary>
    /// <remarks>
    /// This new price will be what the user is charged at the begining of each new period. This override is specific to the current subscription and will not carry over if they end and later re-subscribe. It will persist if the plan is changed using the setUserSubscriptionPlan endpoint. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; USERS_SUBSCRIPTIONS_ADMIN
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="inventoryId">The id of the user&#39;s inventory</param>/// <param name="the_override_details">override (optional)</param>
    pplx::task<void> setUserSubscriptionPrice(int32_t userId, int32_t inventoryId, std::shared_ptr<SubscriptionPriceOverrideRequest> the_override_details);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UsersSubscriptionsApi_H_ */

