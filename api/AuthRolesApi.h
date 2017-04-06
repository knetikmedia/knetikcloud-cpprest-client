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
 * AuthRolesApi.h
 *
 * 
 */

#ifndef AuthRolesApi_H_
#define AuthRolesApi_H_


#include "ApiClient.h"

#include "ClientResource.h"
#include "PageResource«RoleResource».h"
#include "Result.h"
#include "RoleResource.h"
#include "UserResource.h"
#include <vector>
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  AuthRolesApi
{
public:
    AuthRolesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~AuthRolesApi();
    /// <summary>
    /// Create a new role
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="roleResource">The role resource object (optional)</param>
    pplx::task<std::shared_ptr<RoleResource>> createRole(std::shared_ptr<RoleResource> roleResource);
    /// <summary>
    /// Delete a role
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="role">The role value</param>/// <param name="force">If true, removes role from users/clients (optional)</param>
    pplx::task<void> deleteRole(utility::string_t role, bool force);
    /// <summary>
    /// Get roles for a client
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="clientKey">The client key</param>
    pplx::task<std::vector<std::shared_ptr<RoleResource>>> getClientRoles(utility::string_t clientKey);
    /// <summary>
    /// Get a single role
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="role">The role value</param>
    pplx::task<std::shared_ptr<RoleResource>> getRole(utility::string_t role);
    /// <summary>
    /// List and search roles
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«RoleResource»>> getRoles(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get roles for a user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>
    pplx::task<std::vector<std::shared_ptr<RoleResource>>> getUserRoles(int32_t userId);
    /// <summary>
    /// Set roles for a client
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="clientKey">The client key</param>/// <param name="rolesList">The list of unique roles (optional)</param>
    pplx::task<std::shared_ptr<ClientResource>> setClientRoles(utility::string_t clientKey, std::vector<utility::string_t> rolesList);
    /// <summary>
    /// Set permissions for a role
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="role">The role value</param>/// <param name="permissionsList">The list of unique permissions (optional)</param>
    pplx::task<std::shared_ptr<RoleResource>> setPermissionsForRole(utility::string_t role, std::vector<utility::string_t> permissionsList);
    /// <summary>
    /// Set roles for a user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The user&#39;s id</param>/// <param name="rolesList">The list of unique roles (optional)</param>
    pplx::task<std::shared_ptr<UserResource>> setUserRoles(int32_t userId, std::vector<utility::string_t> rolesList);
    /// <summary>
    /// Update a role
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="role">The role value</param>/// <param name="roleResource">The role resource object (optional)</param>
    pplx::task<std::shared_ptr<RoleResource>> updateRole(utility::string_t role, std::shared_ptr<RoleResource> roleResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AuthRolesApi_H_ */

