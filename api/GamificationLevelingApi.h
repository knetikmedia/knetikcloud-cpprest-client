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
 * GamificationLevelingApi.h
 *
 * 
 */

#ifndef GamificationLevelingApi_H_
#define GamificationLevelingApi_H_


#include "ApiClient.h"

#include "BreTriggerResource.h"
#include "LevelingResource.h"
#include "PageResource«LevelingResource».h"
#include "PageResource«UserLevelingResource».h"
#include "Result.h"
#include "UserLevelingResource.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  GamificationLevelingApi
{
public:
    GamificationLevelingApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~GamificationLevelingApi();
    /// <summary>
    /// Create a level schema
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="level">The level schema definition (optional)</param>
    pplx::task<std::shared_ptr<LevelingResource>> createLevel(std::shared_ptr<LevelingResource> level);
    /// <summary>
    /// Delete a level
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The level schema name</param>
    pplx::task<void> deleteLevel(utility::string_t name);
    /// <summary>
    /// Retrieve a level
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The level schema name</param>
    pplx::task<std::shared_ptr<LevelingResource>> getLevel(utility::string_t name);
    /// <summary>
    /// Get the list of triggers that can be used to trigger a leveling progress update
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::vector<std::shared_ptr<BreTriggerResource>>> getLevelTriggers();
    /// <summary>
    /// List and search levels
    /// </summary>
    /// <remarks>
    /// Get a list of levels schemas with optional filtering
    /// </remarks>
    /// <param name="filterName">Filter for level schemas whose name contains a given string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«LevelingResource»>> getLevels(utility::string_t filterName, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a user&#39;s progress for a given level schema
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="name">The level schema name</param>
    pplx::task<std::shared_ptr<UserLevelingResource>> getUserLevel(int32_t userId, utility::string_t name);
    /// <summary>
    /// Get a user&#39;s progress for all level schemas
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The id of the user</param>
    pplx::task<std::shared_ptr<PageResource«UserLevelingResource»>> getUserLevels(int32_t userId);
    /// <summary>
    /// Update a level
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The level schema name</param>/// <param name="newLevel">The level schema definition (optional)</param>
    pplx::task<std::shared_ptr<LevelingResource>> updateLevel(utility::string_t name, std::shared_ptr<LevelingResource> newLevel);
    /// <summary>
    /// Update or create a leveling progress record for a user
    /// </summary>
    /// <remarks>
    /// If no progress record yet exists for the user, it will be created. Otherwise it will be updated. If progress meets or exceeds the level&#39;s max_value it will be marked as earned and a BRE event will be triggered for the &lt;code&gt;BreAchievementEarnedTrigger&lt;/code&gt;.
    /// </remarks>
    /// <param name="userId">The id of the user</param>/// <param name="name">The level schema name</param>/// <param name="progress">The current progress amount (optional)</param>
    pplx::task<void> updateUserLevel(int32_t userId, utility::string_t name, int32_t progress);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* GamificationLevelingApi_H_ */

