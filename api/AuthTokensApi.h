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
 * AuthTokensApi.h
 *
 * 
 */

#ifndef AuthTokensApi_H_
#define AuthTokensApi_H_


#include "ApiClient.h"

#include "OauthAccessTokenResource.h"
#include "PageResource«OauthAccessTokenResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  AuthTokensApi
{
public:
    AuthTokensApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~AuthTokensApi();
    /// <summary>
    /// Delete a token by username and client id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username">The username of the user</param>/// <param name="clientId">The id of the client</param>
    pplx::task<void> deleteToken(utility::string_t username, utility::string_t clientId);
    /// <summary>
    /// Delete all tokens by username
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username">The username of the user</param>
    pplx::task<void> deleteTokens(utility::string_t username);
    /// <summary>
    /// Get a single token by username and client id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username">The username of the user</param>/// <param name="clientId">The id of the client</param>
    pplx::task<std::shared_ptr<OauthAccessTokenResource>> getToken(utility::string_t username, utility::string_t clientId);
    /// <summary>
    /// List usernames and client ids
    /// </summary>
    /// <remarks>
    /// Token value not shown
    /// </remarks>
    /// <param name="filterClientId">Filters for token whose client id matches provided string (optional)</param>/// <param name="filterUsername">Filters for token whose username matches provided string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to username:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«OauthAccessTokenResource»>> getTokens(utility::string_t filterClientId, utility::string_t filterUsername, int32_t size, int32_t page, utility::string_t order);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AuthTokensApi_H_ */

