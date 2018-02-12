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
 * NotificationsApi.h
 *
 * 
 */

#ifndef NotificationsApi_H_
#define NotificationsApi_H_


#include "ApiClient.h"

#include "NotificationResource.h"
#include "NotificationTypeResource.h"
#include "NotificationUserTypeResource.h"
#include "PageResource«NotificationTypeResource».h"
#include "PageResource«NotificationUserTypeResource».h"
#include "PageResource«UserNotificationResource».h"
#include "Result.h"
#include "ValueWrapper«boolean».h"
#include "ValueWrapper«string».h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  NotificationsApi
{
public:
    NotificationsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~NotificationsApi();
    /// <summary>
    /// Create a notification type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="notificationType">notificationType (optional)</param>
    pplx::task<std::shared_ptr<NotificationTypeResource>> createNotificationType(std::shared_ptr<NotificationTypeResource> notificationType);
    /// <summary>
    /// Delete a notification type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">id</param>
    pplx::task<void> deleteNotificationType(utility::string_t id);
    /// <summary>
    /// Get a single notification type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">id</param>
    pplx::task<std::shared_ptr<NotificationTypeResource>> getNotificationType(utility::string_t id);
    /// <summary>
    /// List and search notification types
    /// </summary>
    /// <remarks>
    /// Get a list of notification type with optional filtering
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«NotificationTypeResource»>> getNotificationTypes(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// View a user&#39;s notification settings for a type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="typeId">The id of the topic</param>/// <param name="userId">The id of the subscriber or &#39;me&#39;</param>
    pplx::task<std::shared_ptr<NotificationUserTypeResource>> getUserNotificationInfo(utility::string_t typeId, utility::string_t userId);
    /// <summary>
    /// View a user&#39;s notification settings
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the subscriber or &#39;me&#39;</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«NotificationUserTypeResource»>> getUserNotificationInfoList(utility::string_t userId, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get notifications
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the user or &#39;me&#39;</param>/// <param name="filterStatus">filter for notifications with a given status (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«UserNotificationResource»>> getUserNotifications(utility::string_t id, utility::string_t filterStatus, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Send a notification
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="notification">notification (optional)</param>
    pplx::task<std::shared_ptr<NotificationResource>> sendNotification(std::shared_ptr<NotificationResource> notification);
    /// <summary>
    /// Set notification status
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39;</param>/// <param name="notificationId">The id of the notification</param>/// <param name="notification">status (optional)</param>
    pplx::task<void> setUserNotificationStatus(utility::string_t userId, utility::string_t notificationId, std::shared_ptr<ValueWrapper«string»> notification);
    /// <summary>
    /// Enable or disable direct notifications for a user
    /// </summary>
    /// <remarks>
    /// Allows enabling or disabling messages for a given notification type when sent direct to the user. Notifications can still be retrieved by endpoint. For notifications broadcased to a topic, see the topic service to disable messages for the user there.
    /// </remarks>
    /// <param name="typeId">The id of the topic</param>/// <param name="userId">The id of the subscriber or &#39;me&#39;</param>/// <param name="silenced">silenced</param>
    pplx::task<void> silenceDirectNotifications(utility::string_t typeId, utility::string_t userId, std::shared_ptr<ValueWrapper«boolean»> silenced);
    /// <summary>
    /// Update a notificationType
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">id</param>/// <param name="notificationType">notificationType (optional)</param>
    pplx::task<std::shared_ptr<NotificationTypeResource>> updateNotificationType(utility::string_t id, std::shared_ptr<NotificationTypeResource> notificationType);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* NotificationsApi_H_ */
