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
 * UsersRelationshipsApi.h
 *
 * 
 */

#ifndef UsersRelationshipsApi_H_
#define UsersRelationshipsApi_H_


#include "ApiClient.h"

#include "PageResource«UserRelationshipResource».h"
#include "Result.h"
#include "UserRelationshipResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  UsersRelationshipsApi
{
public:
    UsersRelationshipsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersRelationshipsApi();
    /// <summary>
    /// Create a user relationship
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="relationship">The new relationship (optional)</param>
    pplx::task<std::shared_ptr<UserRelationshipResource>> createUserRelationship(std::shared_ptr<UserRelationshipResource> relationship);
    /// <summary>
    /// Delete a user relationship
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the relationship</param>
    pplx::task<void> deleteUserRelationship(int64_t id);
    /// <summary>
    /// Get a user relationship
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the relationship</param>
    pplx::task<std::shared_ptr<UserRelationshipResource>> getUserRelationship(int64_t id);
    /// <summary>
    /// Get a list of user relationships
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::shared_ptr<PageResource«UserRelationshipResource»>> getUserRelationships();
    /// <summary>
    /// Update a user relationship
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the relationship</param>/// <param name="relationship">The new relationship (optional)</param>
    pplx::task<std::shared_ptr<UserRelationshipResource>> updateUserRelationship(int64_t id, std::shared_ptr<UserRelationshipResource> relationship);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* UsersRelationshipsApi_H_ */

