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
 * CampaignsRewardsApi.h
 *
 * 
 */

#ifndef CampaignsRewardsApi_H_
#define CampaignsRewardsApi_H_


#include "ApiClient.h"

#include "PageResource«RewardSetResource».h"
#include "Result.h"
#include "RewardSetResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  CampaignsRewardsApi
{
public:
    CampaignsRewardsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~CampaignsRewardsApi();
    /// <summary>
    /// Create a reward set
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="rewardSetResource">The reward set resource object (optional)</param>
    pplx::task<std::shared_ptr<RewardSetResource>> createRewardSet(std::shared_ptr<RewardSetResource> rewardSetResource);
    /// <summary>
    /// Delete a reward set
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The reward id</param>
    pplx::task<void> deleteRewardSet(int32_t id);
    /// <summary>
    /// Get a single reward set
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The reward id</param>
    pplx::task<std::shared_ptr<RewardSetResource>> getRewardSet(int32_t id);
    /// <summary>
    /// List and search reward sets
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«RewardSetResource»>> getRewardSets(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a reward set
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The reward id</param>/// <param name="rewardSetResource">The reward set resource object (optional)</param>
    pplx::task<std::shared_ptr<RewardSetResource>> updateRewardSet(int32_t id, std::shared_ptr<RewardSetResource> rewardSetResource);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CampaignsRewardsApi_H_ */

