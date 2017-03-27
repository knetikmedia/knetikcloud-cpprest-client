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
 * GamificationLeaderboardsApi.h
 *
 * 
 */

#ifndef GamificationLeaderboardsApi_H_
#define GamificationLeaderboardsApi_H_


#include "ApiClient.h"

#include "LeaderboardEntryResource.h"
#include "LeaderboardResource.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  GamificationLeaderboardsApi
{
public:
    GamificationLeaderboardsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~GamificationLeaderboardsApi();
    /// <summary>
    /// Retrieves leaderboard details and paginated entries
    /// </summary>
    /// <remarks>
    /// The context type identifies the type of entity (i.e., &#39;activity&#39;) being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard.
    /// </remarks>
    /// <param name="contextType">The context type for the leaderboard</param>/// <param name="contextId">The context id for the leaderboard</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<LeaderboardResource>> getLeaderboard(utility::string_t contextType, utility::string_t contextId, int32_t size, int32_t page);
    /// <summary>
    /// Retrieves a specific user entry with rank
    /// </summary>
    /// <remarks>
    /// The context type identifies the type of entity (i.e., &#39;activity&#39;) being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard
    /// </remarks>
    /// <param name="contextType">The context type for the leaderboard</param>/// <param name="contextId">The context id for the leaderboard</param>/// <param name="id">The id of a user</param>
    pplx::task<std::shared_ptr<LeaderboardEntryResource>> getLeaderboardRank(utility::string_t contextType, utility::string_t contextId, utility::string_t id);
    /// <summary>
    /// Get a list of available leaderboard strategy names
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::vector<utility::string_t>> getLeaderboardStrategies();

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* GamificationLeaderboardsApi_H_ */

