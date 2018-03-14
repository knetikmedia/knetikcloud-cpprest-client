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
 * Users_FriendshipsApi.h
 *
 * 
 */

#ifndef Users_FriendshipsApi_H_
#define Users_FriendshipsApi_H_


#include "ApiClient.h"

#include "PageResource«SimpleUserResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Users_FriendshipsApi
{
public:
    Users_FriendshipsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Users_FriendshipsApi();
    /// <summary>
    /// Add a friend
    /// </summary>
    /// <remarks>
    /// As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39; if logged in</param>/// <param name="id">The id of the user to befriend</param>
    pplx::task<void> addFriend(utility::string_t userId, int32_t id);
    /// <summary>
    /// Get friends list
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39;</param>/// <param name="filterUsername">Filter for friends with the given username (optional)</param>/// <param name="filterUserId">Filter for friends by user id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«SimpleUserResource»>> getFriends(utility::string_t userId, utility::string_t filterUsername, int32_t filterUserId, int32_t size, int32_t page);
    /// <summary>
    /// Returns the invite token
    /// </summary>
    /// <remarks>
    /// This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39; if logged in</param>
    pplx::task<utility::string_t> getInviteToken(utility::string_t userId);
    /// <summary>
    /// Get pending invites
    /// </summary>
    /// <remarks>
    /// Invites that the specified user received. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39;</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«SimpleUserResource»>> getInvites(utility::string_t userId, int32_t size, int32_t page);
    /// <summary>
    /// Redeem friendship token
    /// </summary>
    /// <remarks>
    /// Immediately connects the requested user with the user mapped by the provided invite token. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39; if logged in</param>/// <param name="token">The invite token (optional)</param>
    pplx::task<void> redeemFriendshipToken(utility::string_t userId, std::shared_ptr<StringWrapper> token);
    /// <summary>
    /// Remove or decline a friend
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)
    /// </remarks>
    /// <param name="userId">The id of the user or &#39;me&#39; if logged in</param>/// <param name="id">The id of the user to befriend</param>
    pplx::task<void> removeOrDeclineFriend(utility::string_t userId, int32_t id);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Users_FriendshipsApi_H_ */
