/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UsersApi.h
 *
 * 
 */

#ifndef UsersApi_H_
#define UsersApi_H_


#include "ApiClient.h"

#include "NewPasswordRequest.h"
#include "PageResource«TemplateResource».h"
#include "PageResource«UserBaseResource».h"
#include "PasswordResetRequest.h"
#include "Result.h"
#include "TemplateResource.h"
#include "UserResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UsersApi
{
public:
    UsersApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersApi();
    /// <summary>
    /// Add a tag to a user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="tag">tag</param>
    pplx::task<void> addUserTag(int32_t userId, utility::string_t tag);
    /// <summary>
    /// Create a user template
    /// </summary>
    /// <remarks>
    /// User Templates define a type of user and the properties they have
    /// </remarks>
    /// <param name="userTemplateResource">The user template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createUserTemplate(std::shared_ptr<TemplateResource> userTemplateResource);
    /// <summary>
    /// Delete a user template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteUserTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get a single user
    /// </summary>
    /// <remarks>
    /// Additional private info is included as USERS_ADMIN
    /// </remarks>
    /// <param name="id">The id of the user or &#39;me&#39;</param>
    pplx::task<std::shared_ptr<UserResource>> getUser(utility::string_t id);
    /// <summary>
    /// List tags for a user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>
    pplx::task<std::vector<utility::string_t>> getUserTags(int32_t userId);
    /// <summary>
    /// Get a single user template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getUserTemplate(utility::string_t id);
    /// <summary>
    /// List and search user templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getUserTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search users
    /// </summary>
    /// <remarks>
    /// Additional private info is included as USERS_ADMIN
    /// </remarks>
    /// <param name="filterDisplayname">Filter for users whose display name starts with provided string. (optional)</param>/// <param name="filterEmail">Filter for users whose email starts with provided string. Requires USERS_ADMIN permission (optional)</param>/// <param name="filterFirstname">Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission (optional)</param>/// <param name="filterFullname">Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission (optional)</param>/// <param name="filterLastname">Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission (optional)</param>/// <param name="filterUsername">Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission (optional)</param>/// <param name="filterTag">Filter for users who have a given tag (optional)</param>/// <param name="filterGroup">Filter for users in a given group, by unique name (optional)</param>/// <param name="filterRole">Filter for users with a given role (optional)</param>/// <param name="filterSearch">Filter for users whose display_name starts with the provided string, or username if display_name is null (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«UserBaseResource»>> getUsers(utility::string_t filterDisplayname, utility::string_t filterEmail, utility::string_t filterFirstname, utility::string_t filterFullname, utility::string_t filterLastname, utility::string_t filterUsername, utility::string_t filterTag, utility::string_t filterGroup, utility::string_t filterRole, utility::string_t filterSearch, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Choose a new password after a reset
    /// </summary>
    /// <remarks>
    /// Finish resetting a user&#39;s password using the secret provided from the password-reset endpoint.  Password should be in plain text and will be encrypted on receipt. Use SSL for security.
    /// </remarks>
    /// <param name="id">The id of the user</param>/// <param name="newPasswordRequest">The new password request object (optional)</param>
    pplx::task<void> passwordReset(int32_t id, std::shared_ptr<NewPasswordRequest> newPasswordRequest);
    /// <summary>
    /// Register a new user
    /// </summary>
    /// <remarks>
    /// Password should be in plain text and will be encrypted on receipt. Use SSL for security
    /// </remarks>
    /// <param name="userResource">The user resource object (optional)</param>
    pplx::task<std::shared_ptr<UserResource>> registerUser(std::shared_ptr<UserResource> userResource);
    /// <summary>
    /// Remove a tag from a user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="tag">The tag to remove</param>
    pplx::task<void> removeUserTag(int32_t userId, utility::string_t tag);
    /// <summary>
    /// Set a user&#39;s password
    /// </summary>
    /// <remarks>
    /// Password should be in plain text and will be encrypted on receipt. Use SSL for security.
    /// </remarks>
    /// <param name="id">The id of the user</param>/// <param name="password">The new plain text password (optional)</param>
    pplx::task<void> setPassword(int32_t id, utility::string_t password);
    /// <summary>
    /// Reset a user&#39;s password
    /// </summary>
    /// <remarks>
    /// A reset code will be generated and a &#39;forgot_password&#39; BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit
    /// </remarks>
    /// <param name="id">The id of the user</param>
    pplx::task<void> startPasswordReset(int32_t id);
    /// <summary>
    /// Reset a user&#39;s password without user id
    /// </summary>
    /// <remarks>
    /// A reset code will be generated and a &#39;forgot_password&#39; BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit.  Must submit their email, username, or mobile phone number
    /// </remarks>
    /// <param name="passwordReset">An object containing one of three methods to look up a user (optional)</param>
    pplx::task<void> submitPasswordReset(std::shared_ptr<PasswordResetRequest> passwordReset);
    /// <summary>
    /// Update a user
    /// </summary>
    /// <remarks>
    /// Password will not be edited on this endpoint, use password specific endpoints.
    /// </remarks>
    /// <param name="id">The id of the user or &#39;me&#39;</param>/// <param name="userResource">The user resource object (optional)</param>
    pplx::task<void> updateUser(utility::string_t id, std::shared_ptr<UserResource> userResource);
    /// <summary>
    /// Update a user template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="userTemplateResource">The user template resource object (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateUserTemplate(utility::string_t id, std::shared_ptr<TemplateResource> userTemplateResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UsersApi_H_ */

