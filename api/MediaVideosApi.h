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
 * MediaVideosApi.h
 *
 * 
 */

#ifndef MediaVideosApi_H_
#define MediaVideosApi_H_


#include "ApiClient.h"

#include "CommentResource.h"
#include "ContributionResource.h"
#include "DispositionResource.h"
#include "FlagResource.h"
#include "PageResource«CommentResource».h"
#include "PageResource«DispositionResource».h"
#include "PageResource«VideoRelationshipResource».h"
#include "PageResource«VideoResource».h"
#include "Result.h"
#include "VideoRelationshipResource.h"
#include "VideoResource.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  MediaVideosApi
{
public:
    MediaVideosApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~MediaVideosApi();
    /// <summary>
    /// Adds a user to a video&#39;s whitelist
    /// </summary>
    /// <remarks>
    /// Whitelisted users can view video regardless of privacy setting.
    /// </remarks>
    /// <param name="id">The video id</param>/// <param name="userId">The user id (optional)</param>
    pplx::task<void> addUserToVideoWhitelist(int64_t id, int32_t userId);
    /// <summary>
    /// Adds a new video in the system
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoResource">The video object (optional)</param>
    pplx::task<std::shared_ptr<VideoResource>> addVideo(std::shared_ptr<VideoResource> videoResource);
    /// <summary>
    /// Add a new video comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id </param>/// <param name="commentResource">The comment object (optional)</param>
    pplx::task<std::shared_ptr<CommentResource>> addVideoComment(int32_t videoId, std::shared_ptr<CommentResource> commentResource);
    /// <summary>
    /// Adds a contributor to a video
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="contributionResource">The contribution object (optional)</param>
    pplx::task<void> addVideoContributor(int64_t videoId, std::shared_ptr<ContributionResource> contributionResource);
    /// <summary>
    /// Add a new flag
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="reason">The flag reason (optional)</param>
    pplx::task<std::shared_ptr<FlagResource>> addVideoFlag(int64_t videoId, utility::string_t reason);
    /// <summary>
    /// Adds one or more existing videos as related to this one
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="videoRelationshipResource">The video relationship object  (optional)</param>
    pplx::task<std::shared_ptr<VideoRelationshipResource>> addVideoRelationships(int64_t videoId, std::shared_ptr<VideoRelationshipResource> videoRelationshipResource);
    /// <summary>
    /// Create a video disposition
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="dispositionResource">The disposition object (optional)</param>
    pplx::task<std::shared_ptr<DispositionResource>> createVideoDisposition(int32_t videoId, std::shared_ptr<DispositionResource> dispositionResource);
    /// <summary>
    /// Deletes a video from the system if no resources are attached to it
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The video id</param>
    pplx::task<void> deleteVideo(int64_t id);
    /// <summary>
    /// Delete a video comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="id">The comment id</param>
    pplx::task<void> deleteVideoComment(int64_t videoId, int64_t id);
    /// <summary>
    /// Delete a video disposition
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="dispositionId">The disposition id</param>
    pplx::task<void> deleteVideoDisposition(int64_t dispositionId);
    /// <summary>
    /// Delete a flag
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>
    pplx::task<void> deleteVideoFlag(int64_t videoId);
    /// <summary>
    /// Delete a video&#39;s relationship
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="id">The relationship id</param>
    pplx::task<void> deleteVideoRelationship(int64_t videoId, int64_t id);
    /// <summary>
    /// Get user videos
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userId">The user id</param>/// <param name="excludeFlagged">Skip videos that have been flagged by the current user (optional, default to true)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«VideoResource»>> getUserVideos(int32_t userId, bool excludeFlagged, int32_t size, int32_t page);
    /// <summary>
    /// Loads a specific video details
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The video id</param>
    pplx::task<std::shared_ptr<VideoResource>> getVideo(int64_t id);
    /// <summary>
    /// Returns a page of comments for a video
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«CommentResource»>> getVideoComments(int32_t videoId, int32_t size, int32_t page);
    /// <summary>
    /// Returns a page of dispositions for a video
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«DispositionResource»>> getVideoDispositions(int32_t videoId, int32_t size, int32_t page);
    /// <summary>
    /// Returns a page of video relationships
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«VideoRelationshipResource»>> getVideoRelationships(int64_t videoId, int32_t size, int32_t page);
    /// <summary>
    /// Search videos using the documented filters
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="excludeFlagged">Skip videos that have been flagged by the current user (optional, default to true)</param>/// <param name="filterVideosByUploader">Filter for videos by uploader id (optional)</param>/// <param name="filterCategory">Filter for videos from a specific category by id (optional)</param>/// <param name="filterTagset">Filter for videos with specified tags (separated by comma) (optional)</param>/// <param name="filterVideosByName">Filter for videos which name *STARTS* with the given string (optional)</param>/// <param name="filterVideosByContributor">Filter for videos with contribution from the artist specified by ID (optional)</param>/// <param name="filterVideosByAuthor">Filter for videos with an artist as author specified by ID (optional)</param>/// <param name="filterHasAuthor">Filter for videos that have an author set if true, or that have no author if false (optional)</param>/// <param name="filterHasUploader">Filter for videos that have an uploader set if true, or that have no uploader if false (optional)</param>/// <param name="filterRelatedTo">Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well (optional)</param>/// <param name="filterFriends">Filter for videos uploaded by friends. &#39;true&#39; for friends of the caller (requires user token) or a user id for a specific user&#39;s friends (requires VIDEOS_ADMIN permission) (optional)</param>/// <param name="filterDisposition">Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or &#39;me&#39; for the caller (requires user token for &#39;me&#39;) and DISPOSITION is the name of the disposition. E.G. filter_disposition&#x3D;123:like or filter_disposition&#x3D;me:favorite (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to author:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«VideoResource»>> getVideos(bool excludeFlagged, utility::string_t filterVideosByUploader, utility::string_t filterCategory, utility::string_t filterTagset, utility::string_t filterVideosByName, utility::string_t filterVideosByContributor, utility::string_t filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, utility::string_t filterRelatedTo, bool filterFriends, utility::string_t filterDisposition, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Removes a user from a video&#39;s whitelist
    /// </summary>
    /// <remarks>
    /// Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting.
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="id">The user id</param>
    pplx::task<void> removeUserFromVideoWhitelist(int64_t videoId, int32_t id);
    /// <summary>
    /// Removes a contributor from a video
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="id">The contributor id</param>
    pplx::task<void> removeVideoContributor(int64_t videoId, int32_t id);
    /// <summary>
    /// Modifies a video&#39;s details
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The video id</param>/// <param name="videoResource">The video object (optional)</param>
    pplx::task<void> updateVideo(int64_t id, std::shared_ptr<VideoResource> videoResource);
    /// <summary>
    /// Update a video comment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="id">The comment id</param>/// <param name="content">The comment content (optional)</param>
    pplx::task<void> updateVideoComment(int64_t videoId, int64_t id, utility::string_t content);
    /// <summary>
    /// Update a video&#39;s relationship details
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="videoId">The video id</param>/// <param name="relationshipId">The relationship id</param>/// <param name="details">The video relationship details (optional)</param>
    pplx::task<void> updateVideoRelationship(int64_t videoId, int64_t relationshipId, utility::string_t details);
    /// <summary>
    /// Increment a video&#39;s view count
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The video id</param>
    pplx::task<void> viewVideo(int64_t id);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* MediaVideosApi_H_ */
