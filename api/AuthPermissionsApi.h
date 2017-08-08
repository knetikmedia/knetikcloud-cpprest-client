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
 * AuthPermissionsApi.h
 *
 * 
 */

#ifndef AuthPermissionsApi_H_
#define AuthPermissionsApi_H_


#include "ApiClient.h"

#include "PageResource«PermissionResource».h"
#include "PermissionResource.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  AuthPermissionsApi
{
public:
    AuthPermissionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~AuthPermissionsApi();
    /// <summary>
    /// Create a new permission
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="permissionResource">The permission resource object (optional)</param>
    pplx::task<std::shared_ptr<PermissionResource>> createPermission(std::shared_ptr<PermissionResource> permissionResource);
    /// <summary>
    /// Delete a permission
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="permission">The permission value</param>/// <param name="force">If true, removes permission assigned to roles (optional)</param>
    pplx::task<void> deletePermission(utility::string_t permission, bool force);
    /// <summary>
    /// Get a single permission
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="permission">The permission value</param>
    pplx::task<std::shared_ptr<PermissionResource>> getPermission(utility::string_t permission);
    /// <summary>
    /// List and search permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to permission:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«PermissionResource»>> getPermissions(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a permission
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="permission">The permission value</param>/// <param name="permissionResource">The permission resource object (optional)</param>
    pplx::task<std::shared_ptr<PermissionResource>> updatePermission(utility::string_t permission, std::shared_ptr<PermissionResource> permissionResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AuthPermissionsApi_H_ */

