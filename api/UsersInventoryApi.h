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
 * UsersInventoryApi.h
 *
 * 
 */

#ifndef UsersInventoryApi_H_
#define UsersInventoryApi_H_


#include "ApiClient.h"

#include "EntitlementGrantRequest.h"
#include "EntitlementItem.h"
#include "InvoiceResource.h"
#include "ItemTemplateResource.h"
#include "PageResource«EntitlementItem».h"
#include "PageResource«ItemTemplateResource».h"
#include "PageResource«UserInventoryResource».h"
#include "PageResource«UserItemLogResource».h"
#include "Result.h"
#include "UserInventoryAddRequest.h"
#include "UserInventoryResource.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  UsersInventoryApi
{
public:
    UsersInventoryApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersInventoryApi();
    /// <summary>
    /// Adds an item to the user inventory
    /// </summary>
    /// <remarks>
    /// The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time
    /// </remarks>
    /// <param name="id">The id of the user</param>/// <param name="userInventoryAddRequest">The user inventory add request object (optional)</param>
    pplx::task<std::shared_ptr<InvoiceResource>> addItemToUserInventory(int32_t id, std::shared_ptr<UserInventoryAddRequest> userInventoryAddRequest);
    /// <summary>
    /// Check for access to an item without consuming
    /// </summary>
    /// <remarks>
    /// Useful for pre-check and accounts for all various buisness rules
    /// </remarks>
    /// <param name="userId">The id of the user to check for or &#39;me&#39; for logged in user</param>/// <param name="itemId">The id of the item</param>/// <param name="sku">The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)</param>
    pplx::task<void> checkUserEntitlementItem(utility::string_t userId, int32_t itemId, utility::string_t sku);
    /// <summary>
    /// Create an entitlement item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="cascade">Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional, default to false)</param>/// <param name="entitlementItem">The entitlement item object (optional)</param>
    pplx::task<std::shared_ptr<EntitlementItem>> createEntitlementItem(bool cascade, std::shared_ptr<EntitlementItem> entitlementItem);
    /// <summary>
    /// Create an entitlement template
    /// </summary>
    /// <remarks>
    /// Entitlement templates define a type of entitlement and the properties they have
    /// </remarks>
    /// <param name="template">The entitlement template to be created (optional)</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> createEntitlementTemplate(std::shared_ptr<ItemTemplateResource> template);
    /// <summary>
    /// Delete an entitlement item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entitlementId">The id of the entitlement</param>
    pplx::task<void> deleteEntitlementItem(int32_t entitlementId);
    /// <summary>
    /// Delete an entitlement template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteEntitlementTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single entitlement item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entitlementId">The id of the entitlement</param>
    pplx::task<std::shared_ptr<EntitlementItem>> getEntitlementItem(int32_t entitlementId);
    /// <summary>
    /// List and search entitlement items
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«EntitlementItem»>> getEntitlementItems(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single entitlement template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> getEntitlementTemplate(utility::string_t id);
    /// <summary>
    /// List and search entitlement templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ItemTemplateResource»>> getEntitlementTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List the user inventory entries for a given user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the user</param>/// <param name="inactive">If true, accepts inactive user inventories (optional, default to false)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="filterItemName">Filter by items whose name starts with a string (optional)</param>/// <param name="filterItemId">Filter by item id (optional)</param>/// <param name="filterUsername">Filter by entries owned by the user with the specified username (optional)</param>/// <param name="filterGroup">Filter by entries owned by the users in a given group, by unique name (optional)</param>/// <param name="filterDate">A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>
    pplx::task<std::shared_ptr<PageResource«UserInventoryResource»>> getUserInventories(int32_t id, bool inactive, int32_t size, int32_t page, utility::string_t filterItemName, int32_t filterItemId, utility::string_t filterUsername, utility::string_t filterGroup, utility::string_t filterDate);
    /// <summary>
    /// Get an inventory entry
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the inventory owner or &#39;me&#39; for the logged in user</param>/// <param name="id">The id of the user inventory</param>
    pplx::task<std::shared_ptr<UserInventoryResource>> getUserInventory(int32_t userId, int32_t id);
    /// <summary>
    /// List the log entries for this inventory entry
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the inventory owner or &#39;me&#39; for the logged in user</param>/// <param name="id">The id of the user inventory</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«UserItemLogResource»>> getUserInventoryLog(utility::string_t userId, int32_t id, int32_t size, int32_t page);
    /// <summary>
    /// List the user inventory entries for all users
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="inactive">If true, accepts inactive user inventories (optional, default to false)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="filterItemName">Filter by items whose name starts with a string (optional)</param>/// <param name="filterItemId">Filter by item id (optional)</param>/// <param name="filterUsername">Filter by entries owned by the user with the specified username (optional)</param>/// <param name="filterGroup">Filter by entries owned by the users in a given group, by unique name (optional)</param>/// <param name="filterDate">A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)</param>
    pplx::task<std::shared_ptr<PageResource«UserInventoryResource»>> getUsersInventory(bool inactive, int32_t size, int32_t page, utility::string_t filterItemName, int32_t filterItemId, utility::string_t filterUsername, utility::string_t filterGroup, utility::string_t filterDate);
    /// <summary>
    /// Grant an entitlement
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user to grant the entitlement to</param>/// <param name="grantRequest">grantRequest</param>
    pplx::task<void> grantUserEntitlement(int32_t userId, std::shared_ptr<EntitlementGrantRequest> grantRequest);
    /// <summary>
    /// Update an entitlement item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entitlementId">The id of the entitlement</param>/// <param name="cascade">Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional, default to false)</param>/// <param name="entitlementItem">The entitlement item object (optional)</param>
    pplx::task<void> updateEntitlementItem(int32_t entitlementId, bool cascade, std::shared_ptr<EntitlementItem> entitlementItem);
    /// <summary>
    /// Update an entitlement template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="template">The updated template (optional)</param>
    pplx::task<std::shared_ptr<ItemTemplateResource>> updateEntitlementTemplate(utility::string_t id, std::shared_ptr<ItemTemplateResource> template);
    /// <summary>
    /// Set the behavior data for an inventory entry
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="id">The id of the user inventory</param>/// <param name="data">The data map (optional)</param>
    pplx::task<void> updateUserInventoryBehaviorData(int32_t userId, int32_t id, std::shared_ptr<Object> data);
    /// <summary>
    /// Set the expiration date
    /// </summary>
    /// <remarks>
    /// Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)
    /// </remarks>
    /// <param name="userId">user_id</param>/// <param name="id">The id of the user inventory</param>/// <param name="timestamp">The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)</param>
    pplx::task<void> updateUserInventoryExpires(int32_t userId, int32_t id, int64_t timestamp);
    /// <summary>
    /// Set the status for an inventory entry
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="id">The id of the user inventory</param>/// <param name="inventoryStatus">The inventory status object (optional)</param>
    pplx::task<void> updateUserInventoryStatus(int32_t userId, int32_t id, utility::string_t inventoryStatus);
    /// <summary>
    /// Use an item
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user to check for or &#39;me&#39; for logged in user</param>/// <param name="itemId">The id of the item</param>/// <param name="sku">The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)</param>/// <param name="info">Any additional info to add to the log about this use (optional)</param>
    pplx::task<void> useUserEntitlementItem(utility::string_t userId, int32_t itemId, utility::string_t sku, utility::string_t info);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UsersInventoryApi_H_ */

