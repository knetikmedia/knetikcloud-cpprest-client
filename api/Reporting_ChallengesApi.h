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
 * Reporting_ChallengesApi.h
 *
 * 
 */

#ifndef Reporting_ChallengesApi_H_
#define Reporting_ChallengesApi_H_


#include "ApiClient.h"

#include "PageResource«ChallengeEventParticipantResource».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Reporting_ChallengesApi
{
public:
    Reporting_ChallengesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Reporting_ChallengesApi();
    /// <summary>
    /// Retrieve a challenge event leaderboard details
    /// </summary>
    /// <remarks>
    /// Lists all leaderboard entries with additional user details. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; REPORTING_CHALLENGES_ADMIN
    /// </remarks>
    /// <param name="filterEvent">A sepecific challenge event id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«ChallengeEventParticipantResource»>> getChallengeEventLeaderboard(int64_t filterEvent, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Retrieve a challenge event participant details
    /// </summary>
    /// <remarks>
    /// Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; REPORTING_CHALLENGES_ADMIN
    /// </remarks>
    /// <param name="filterEvent">A sepecific challenge event id (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)</param>
    pplx::task<std::shared_ptr<PageResource«ChallengeEventParticipantResource»>> getChallengeEventParticipants(int64_t filterEvent, int32_t size, int32_t page, utility::string_t order);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Reporting_ChallengesApi_H_ */

