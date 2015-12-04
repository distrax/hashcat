if ((r0.x == search[0])
 && (r1.x == search[1])
 && (r2.x == search[2])
 && (r3.x == search[3]))
{
  const u32 final_hash_pos = digests_offset + 0;

  if ((atomicAdd (&hashes_shown[final_hash_pos], 1) == 0) && (check_vector_accessible (il_pos, bf_loops, bfs_cnt, 0) == 1))
  {
    mark_hash_s0_warp (plains_buf, hashes_shown, final_hash_pos, gid, il_pos);

    d_return_buf[lid] = 1;
  }
}

if ((r0.y == search[0])
 && (r1.y == search[1])
 && (r2.y == search[2])
 && (r3.y == search[3]))
{
  const u32 final_hash_pos = digests_offset + 0;

  if ((atomicAdd (&hashes_shown[final_hash_pos], 1) == 0) && (check_vector_accessible (il_pos, bf_loops, bfs_cnt, 1) == 1))
  {
    mark_hash_s1_warp (plains_buf, hashes_shown, final_hash_pos, gid, il_pos);

    d_return_buf[lid] = 1;
  }
}
